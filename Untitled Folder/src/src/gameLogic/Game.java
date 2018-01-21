package gameLogic;

import java.util.ArrayList;

import board.Board;
import board.Point;
import javafx.beans.property.BooleanProperty;
import javafx.scene.image.ImageView;
import player.PlayerLogic;
import player.PlayerSign;
/**
 * class game.
 *
 */
public class Game {
/**
 * members.
 */
	private Board board;
	private ArrayList<Rule> rules;
	private BooleanProperty ended;
	private PlayerLogic opponent;
	private PlayerLogic currentPlayer;
/**
 * constructor.
 * @param size - the given size.
 * @param p1 - the given first player sign.
 * @param p2 - the given second player sign.
 * @param ended - a flag if the game was finished.
 */
	public Game(int size, PlayerLogic p1, PlayerLogic p2, BooleanProperty ended) {
		board = new Board(size, p1.getSign(), p2.getSign());
		currentPlayer = p1;
		opponent = p2;
		rules = new ArrayList<Rule>();
		rules.add(new FlipRule());
		this.ended = ended;
	}
/**
 * this method add a rule.
 * @param r - a given rule.
 */
	public void addRule(Rule r) {
		rules.add(r);
	}
/**
 * this method checks if the move is valid.
 * @param move - the given move.
 * @param player - the given player sign.
 * @return true if valid.
 */
	public boolean validateMove(Point move, PlayerSign player) {
		return validateMove(player, move, getBoard());
	}
/**
 *  this method checks if the move is valid in the board.
 * @param player  - the given player sign.
 * @param move - the given move
 * @param board - the given board.
 * @return true if valid.
 */
	public boolean validateMove(PlayerSign player, Point move, Board board) {
		for (Rule r : rules) {
			if (!(r.validate(player, move, board))) {
				return false;
			}
		}

		return true;
	}
/**
 * this method updates the board after move.
 * @param move - the given move.
 * @return the number of flipped disks.
 */
	public int updateBoard(Point move) {
		return updateBoard(move, board);
	}
/**
 * this method update the image.
 * @param images - background.
 */
	public void updateImages(ImageView[][] images) {
		for (int i = 0; i < images.length; i++) {
			for (int j = 0; j < images.length; j++) {
				if (board.getCharAt(i, j) == currentPlayer.getSign()) {
					images[i][j].setImage(currentPlayer.getImage(i, j));
				} else if (board.getCharAt(i, j) == opponent.getSign()) {
					images[i][j].setImage(opponent.getImage(i, j));
				}
			}
		}
	}
/**
 * this method update the board.
 * @param move - the given move.
 * @param board - the given board.
 * @return the number of flipped disks.
 */
	public int updateBoard(Point move, Board board) {
		ArrayList<Point> changes = new ArrayList<Point>();

		// adds selected tile to the list
		changes.add(move);
		ArrayList<Point> list;

		// get all tiles to change according to all the rules
		for (Rule r : rules) {
			list = r.listChanges(currentPlayer.getSign(), move, board);
			for (Point p : list) {
				// checks if point is not already in changes list
				if (!changes.contains(p)) {
					changes.add(p);
				}
			}
		}

		int size = changes.size();

		// changes tiles
		for (Point p : changes) {
			board.setTile(p, currentPlayer.getSign());
		}

		PlayerSign curr = currentPlayer.getSign();
		PlayerSign opp = opponent.getSign();

		boolean currPoss = hasPossibleMoves(curr);
		boolean oppPoss = hasPossibleMoves(opp);
		
		// check if game ended
		if (!currPoss && !oppPoss)
			ended.set(true);
		// if opp has moves - switch turn
		else if (oppPoss) {
			PlayerLogic temp = currentPlayer;
			currentPlayer = opponent;
			opponent = temp;
		}

		return size;
	}
/**
 * this method returns the current player sign.
 * @return player sign.
 */
	public PlayerSign getCurrentPlayer() {
		return currentPlayer.getSign();
	}
	/**
	 * this method returns the current player name.
	 * @return player name.
	 */
	public String getCurrentPlayerName() {
		return currentPlayer.getName();
	}
/**
 * this method check if there are possible moves.
 * @param player - the given player sign.
 * @return true if there are possible moves.
 */
	public boolean hasPossibleMoves(PlayerSign player) {
		int size = board.getSize();
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				if (validateMove(new Point(i, j), player))
					return true;

		return false;
	}
/**
 * this method returns a list with the possible moves. 
 * @param player - the given player sign.
 * @return a list of PM.
 */
	public ArrayList<Point> getPossibleMoves(PlayerSign player) {
		return getPossibleMoves(player, board);
	}
/**
 *  this method returns a list with the possible moves according to a given board.
 * @param player -  the given player sign.
 * @param board -  the given board.
 * @return a list of PM.
 */
	public ArrayList<Point> getPossibleMoves(PlayerSign player, Board board) {
		ArrayList<Point> list = new ArrayList<Point>();

		for (int i = 0; i < board.getSize(); i++)
			for (int j = 0; j < board.getSize(); j++) {
				Point ans = new Point(i, j);

				if (validateMove(player, ans, board)) {
					list.add(ans);
				}
			}

		return list;
	}
/**
 * this method returns the winner's name.
 * @return name.
 */
	public String getWinner() {
		int p1Score = 0, p2Score = 0;

		p1Score = board.getScoreByPlayer(currentPlayer.getSign());
		p2Score = board.getScoreByPlayer(opponent.getSign());

		if (p1Score > p2Score)
			return currentPlayer.getName();
		if (p1Score < p2Score)
			return opponent.getName();

		return "Both";
	}
/**
 * this method returns the board size.
 * @return board.
 */
	public Board getBoard() {
		return board;
	}

}
