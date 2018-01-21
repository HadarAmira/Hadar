package gui;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

import board.Point;
import gameLogic.Game;
import javafx.beans.property.BooleanProperty;
import javafx.beans.property.SimpleBooleanProperty;
import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.control.Button;
import javafx.scene.control.ChoiceBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.image.ImageView;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.Modality;
import javafx.stage.Stage;
import player.PcPlayer;
import player.PlayerSign;
/**
 * 
 *class GUI.
 *
 */
public class GUI {
	/**
	 * this method represent the welcome string.
	 * @param primaryStage - the stage.
	 */
	public void welcomeScreen(Stage primaryStage) {
		primaryStage.setTitle("Reversi");
		VBox menu = new VBox(25);
		menu.setPadding(new Insets(60));
		menu.setAlignment(Pos.TOP_CENTER);
		Label title = new Label("Reversi");
		title.setStyle("-fx-font-family: 'Comic Sans MS'; -fx-font-size: 75; -fx-font-weight: bold;");
		title.setPadding(new Insets(0, 0, 70, 0));
		menu.getChildren().add(title);
		Button start = new Button("Start");
		start.setStyle("-fx-font-size: 15; -fx-font-family:Arial; -fx-border-radius: 10; -fx-background-radius: 10;");
		start.setMinSize(100, 40);
		start.setOnAction(new EventHandler<ActionEvent>() {

			@Override
			public void handle(ActionEvent event) {
				primaryStage.setScene(Board());
			}
		});
		Button settings = new Button("Settings");
		settings.setStyle(
				"-fx-font-size: 15; -fx-font-family:Arial; -fx-border-radius: 10; -fx-background-radius: 10;");
		settings.setMinSize(100, 40);
		settings.setOnAction(new EventHandler<ActionEvent>() {

			@Override
			public void handle(ActionEvent arg0) {
				setttingsScene(primaryStage);
			}
		});
		Button exit = new Button("Exit");
		exit.setStyle("-fx-font-size: 15; -fx-font-family:Arial; -fx-border-radius: 10; -fx-background-radius: 10;");
		exit.setMinSize(100, 40);
		exit.setOnAction(new EventHandler<ActionEvent>() {

			@Override
			public void handle(ActionEvent arg0) {
				System.exit(0);
			}
		});

		menu.getChildren().addAll(start, settings, exit);

		Scene scene = new Scene(menu, 600, 550);
		primaryStage.setScene(scene);
		primaryStage.setResizable(false);
		primaryStage.show();

	}
/**
 * this method represent the setting screen.
 * @param origin - the origin stage.
 */
	private void setttingsScene(Stage origin) {
		Stage popMenu = new Stage();
		VBox menu = new VBox(25);
		menu.setPadding(new Insets(60));
		VBox header = new VBox();
		header.setAlignment(Pos.TOP_CENTER);
		Label title = new Label("Settings");
		title.setStyle("-fx-font-size: 32; fx-font-family:Arial;-fx-font-weight: bold;");
		title.setPadding(new Insets(0, 0, 30, 0));
		header.getChildren().add(title);
		menu.getChildren().add(header);

		// load former settings
		String size = "";

		try {
			Scanner reader = new Scanner(new File("settings.txt"));
			reader.nextLine();
			reader.nextLine();
			size = reader.nextLine();
			reader.close();
		} catch (Exception e) {

		}

		//colors list
		ObservableList<String> colors = FXCollections.observableArrayList();
		colors.addAll(ImageHandler.getNames());
		
		VBox options = new VBox(20);
		// choose p1 color
		HBox row = new HBox(15);
		Label label = new Label("First Player Color: ");
		label.setMinWidth(115);
		final ChoiceBox<String> p1Color = new ChoiceBox<>(colors);
		p1Color.setMaxWidth(75);
		row.getChildren().addAll(label, p1Color);
		options.getChildren().add(row);
		// choose p2 color
		row = new HBox(15);
		label = new Label("Second Player Color: ");
		label.setMinWidth(115);
		final ChoiceBox<String> p2Color = new ChoiceBox<>(colors);
		p2Color.setMaxWidth(75);
		row.getChildren().addAll(label, p2Color);
		options.getChildren().add(row);
		// choose board size
		row = new HBox(15);
		label = new Label("Board Size (4-20):");
		label.setMinWidth(115);
		final TextField text = new TextField(size);
		text.setMaxWidth(75);
		row.getChildren().addAll(label, text);
		options.getChildren().add(row);
		menu.getChildren().add(options);

		// enter button
		header = new VBox();
		header.setAlignment(Pos.BASELINE_CENTER);
		Button enter = new Button("Enter");
		enter.setStyle("-fx-font-size: 15; fx-font-family:Arial");
		enter.setMinSize(100, 40);
		enter.setOnAction(new EventHandler<ActionEvent>() {

			@Override
			public void handle(ActionEvent event) {
				// checks for valid size
				if (!validateSize(text.getText())) {
					Alert alert = new Alert(AlertType.INFORMATION);
					alert.setTitle("Invaild input");
					alert.setHeaderText(null);
					alert.setContentText("Enter size between 4 and 20");
					alert.showAndWait();
					return;
				}
				
				// checks for different color
				if (p1Color.getSelectionModel().getSelectedItem().equals(p2Color.getSelectionModel().getSelectedItem())) {
					Alert alert = new Alert(AlertType.INFORMATION);
					alert.setTitle("Invaild input");
					alert.setHeaderText(null);
					alert.setContentText("Choose different colors!");
					alert.showAndWait();
					return;
				}

				try {
					FileWriter writer = new FileWriter(new File("settings.txt"));
					// write p1 color
					writer.write(p1Color.getSelectionModel().getSelectedItem()+"\n");
					// write p2 color
					writer.write(p2Color.getSelectionModel().getSelectedItem()+"\n");
					// write size
					writer.write(text.getText() + "\n");

					writer.close();
					popMenu.close();
				} catch (IOException e) {
					Alert alert = new Alert(AlertType.INFORMATION);
					alert.setTitle("Error occured");
					alert.setHeaderText(null);
					alert.setContentText("Can't write settings");
					alert.showAndWait();
					System.exit(0);
				}
			}
		});
		header.getChildren().add(enter);
		menu.getChildren().add(header);
		Scene scene = new Scene(menu, 400, 400);
		popMenu.setScene(scene);
		popMenu.setResizable(false);
		popMenu.initModality(Modality.APPLICATION_MODAL);
		popMenu.initOwner(origin);
		popMenu.toFront();
		popMenu.show();
	}
	/**
	 * this method checks if the size is valid.
	 * @param text - input.
	 * @return true if the size is valid.
	 */

	private boolean validateSize(String text) {
		try {
			int i = Integer.parseInt(text);
			return i > 3 && i < 21;
		} catch (NumberFormatException e) {
			return false;
		}
	}
/**
 * this method represent the board.
 * @return scene. 
 */
	private Scene Board() {

		try {
			Scanner reader = new Scanner(new File("settings.txt"));
			String firstColor = reader.nextLine();
			String secondColor = reader.nextLine();
			int size = Integer.parseInt(reader.nextLine());
			reader.close();

			PcPlayer p1 = new PcPlayer(PlayerSign.X, firstColor);
			PcPlayer p2 = new PcPlayer(PlayerSign.O, secondColor);

			// initialize game
			final ImageView[][] images  = new ImageView[size][size];
			/// listen if game finished
			BooleanProperty ended = new SimpleBooleanProperty(false);

			final Game game = new Game(size, p1, p2, ended);

			// initialize display
			HBox back = new HBox(10);
			back.setStyle("-fx-background-color: beige");
			VBox board = new VBox();

			// sets info pane
			VBox info = new VBox(10);
			info.setStyle("-fx-border-style:dashed; -fx-border-width:1px; ");
			VBox.setMargin(info, new Insets(15));
			info.setMaxHeight(150);
			info.setPadding(new Insets(10));
			HBox row = new HBox();
			/// curr player
			Label label = new Label("Current Player: ");
			label.setMinWidth(100);
			label.setStyle("-fx-font-size: 15; -fx-font-family:'Century Gothic'");
			final Label turn = new Label();
			turn.setStyle("-fx-font-size: 15; -fx-font-family:'Century Gothic'");
			row.getChildren().addAll(label, turn);
			info.getChildren().add(row);
			/// p1 score
			row = new HBox();
			label = new Label(p1.getName() + " Score: ");
			label.setMinWidth(100);
			label.setStyle("-fx-font-size: 15; -fx-font-family:'Century Gothic'");
			final Label score1 = new Label();
			score1.setStyle("-fx-font-size: 15; -fx-font-family:'Century Gothic'");
			row.getChildren().addAll(label, score1);
			info.getChildren().add(row);
			/// p2 score
			row = new HBox();
			label = new Label(p2.getName() + " Score: ");
			label.setMinWidth(100);
			label.setStyle("-fx-font-size: 15; -fx-font-family:'Century Gothic'");
			final Label score2 = new Label();
			score2.setStyle("-fx-font-size: 15; -fx-font-family:'Century Gothic'");
			row.getChildren().addAll(label, score2);
			info.getChildren().add(row);

			HBox[] rows = new HBox[size];
			for (int i = 0; i < rows.length; i++) {
				rows[i] = new HBox(0);
				for (int j = 0; j < rows.length; j++) {
					images[i][j] = new ImageView();
					images[i][j].setFitWidth(450 / size);
					images[i][j].setFitHeight(450 / size);
					images[i][j].setImage(ImageHandler.getEmpty(i,j));
					rows[i].getChildren().add(images[i][j]);
				}
				board.getChildren().add(rows[i]);
			}

			game.updateImages(images);
			score1.setText(String.valueOf(game.getBoard().getScoreByPlayer(p1.getSign())));
			score2.setText(String.valueOf(game.getBoard().getScoreByPlayer(p2.getSign())));
			turn.setText(game.getCurrentPlayerName());

			// board click listener
			EventHandler<MouseEvent> clicked = new EventHandler<MouseEvent>() {

				@Override
				public void handle(MouseEvent e) {
					for (int i = 0; i < images.length; i++) {
						for (int j = 0; j < images.length; j++) {
							if (e.getSource() == images[i][j]) {
								Point move = new Point(i, j);
								if (game.validateMove(move,game.getCurrentPlayer())) {
									game.updateBoard(move);
									game.updateImages(images);
									score1.setText(String.valueOf(game.getBoard().getScoreByPlayer(p1.getSign())));
									score2.setText(String.valueOf(game.getBoard().getScoreByPlayer(p2.getSign())));
									turn.setText(game.getCurrentPlayerName());
								}
								return;
							}
						}
					}
				}
			};

			for (int i = 0; i < images.length; i++) {
				for (int j = 0; j < images.length; j++) {
					images[i][j].addEventHandler(MouseEvent.MOUSE_CLICKED, clicked);
				}
			}
			back.getChildren().addAll(board, info);
			
			//end game message
			ended.addListener(new ChangeListener<Boolean>() {

				@Override
				public void changed(ObservableValue<? extends Boolean> arg0, Boolean old, Boolean now) {
					if (now.booleanValue()) {
						//update display
						game.updateImages(images);
						score1.setText(String.valueOf(game.getBoard().getScoreByPlayer(p1.getSign())));
						score2.setText(String.valueOf(game.getBoard().getScoreByPlayer(p2.getSign())));
						turn.setText(game.getCurrentPlayerName());
						
						//send message
						String winnerName = game.getWinner();

						Alert alert = new Alert(AlertType.INFORMATION);
						alert.setTitle("Game finished");
						alert.setHeaderText(null);
						alert.setContentText("And the winner is: " + winnerName);
						alert.showAndWait();
						System.exit(0);
					}
				}
			});
			
			return new Scene(back, 675, 450);
		} catch (Exception e) {
			e.printStackTrace();
			Alert alert = new Alert(AlertType.INFORMATION);
			alert.setTitle("Error occured");
			alert.setHeaderText(null);
			alert.setContentText("Bad settings file!");
			alert.showAndWait();
			System.exit(0);
			return null;
		}
	}

}
