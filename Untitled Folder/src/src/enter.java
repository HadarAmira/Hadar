

import gui.GUI;
import javafx.application.Application;
import javafx.stage.Stage;
/**
 * the main program.
 *
 */
public class enter extends Application {
/**
 * main.
 * @param args - input.
 */
	public static void main(String[] args) {
		
		launch();
	}

	@Override
	public void start(Stage primaryStage) throws Exception {
		
		GUI gui = new GUI();
		gui.welcomeScreen(primaryStage);
		
	}

}
