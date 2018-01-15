package gameLogic;
import java.util.ArrayList;

import board.Board;
import board.Point;
import player.PlayerSign;

/**
 * class FlipRule.
 *
 */
public class FlipRule implements Rule {

/**
 * the method check if the move is valid.
 */
	public boolean validate(PlayerSign player, Point move, Board board) {

		int col = move.getCol();
		int row = move.getRow();

		PlayerSign empty = PlayerSign.Z;
		PlayerSign opp = player == PlayerSign.X ? PlayerSign.O : PlayerSign.X;

		if (board.getCharAt(move) != empty)
			return false;

		// check col up
		if (col > 1 && board.getCharAt(row, col - 1) == opp) {
			for (int i = col - 2; i >= 0; i--) {
				if (board.getCharAt(row, i) == player)
					return true;
				else if (board.getCharAt(row, i) == empty)
					break;
			}
		}
		// check col down
		if (col < board.getSize() - 1 && board.getCharAt(row, col + 1) == opp) {
			for (int i = col + 2; i < board.getSize(); i++) {
				if (board.getCharAt(row, i) == player)
					return true;
				else if (board.getCharAt(row, i) == empty)
					break;
			}
		}
		// check row right
		if (row > 1 && board.getCharAt(row - 1, col) == opp) {
			for (int i = row - 2; i >= 0; i--) {
				if (board.getCharAt(i, col) == player)
					return true;
				else if (board.getCharAt(i, col) == empty)
					break;
			}
		}
		// check Row left
		if (row < board.getSize() - 1 && board.getCharAt(row + 1, col) == opp) {
			for (int i = row + 2; i < board.getSize(); i++) {
				if (board.getCharAt(i, col) == player)
					return true;
				else if (board.getCharAt(i, col) == empty)
					break;
			}
		}

		// check diagonal up left
		if (row > 1 && col > 1 && board.getCharAt(row - 1, col - 1) == opp) {
			int j = col - 2;
			for (int i = row - 2; i >= 0 && j >= 0; i--, j--) {
				if (board.getCharAt(i, j) == player)
					return true;
				else if (board.getCharAt(i, j) == empty)
					break;
			}
		}

		// check diagonal up right
		if (row > 1 && col < board.getSize() - 1 && board.getCharAt(row - 1,
				col + 1) == opp) {
			int j = col + 2;
			for (int i = row - 2; i >= 0 && j < board.getSize(); i--, j++) {
				if (board.getCharAt(i, j) == player)
					return true;
				else if (board.getCharAt(i, j) == empty)
					break;
			}
		}

		// check diagonal down right
		if (row < board.getSize() - 1 && col < board.getSize() - 1
				&& board.getCharAt(row + 1, col + 1) == opp) {
			int j = col + 2;
			for (int i = row + 2; i < board.getSize() && j < board.getSize(); i++, j++) {
				if (board.getCharAt(i, j) == player)
					return true;
				else if (board.getCharAt(i, j) == empty)
					break;
			}
		}

		// check diagonal down left
		if (row < board.getSize() - 1 && col > 1 && board.getCharAt(row + 1,
				col - 1) == opp) {
			int j = col - 2;
			for (int i = row + 2; i < board.getSize() && j >= 0; i++, j--) {
				if (board.getCharAt(i, j) == player)
					return true;
				else if (board.getCharAt(i, j) == empty)
					break;
			}
		}

		//no disk to flip
		return false;
	}
/**
 * this method returns a list of changes.
 */
	public ArrayList<Point> listChanges(PlayerSign player, Point move, Board board) {
		ArrayList<Point> changes = new ArrayList<Point>();

		int row = move.getRow();
		int col = move.getCol();


		PlayerSign empty = PlayerSign.Z;
		PlayerSign opp = player == PlayerSign.X ? PlayerSign.O : PlayerSign.X;

		// check row left
		if (col > 1 && board.getCharAt(row, col - 1) == opp) {
			for (int i = col - 2; i >= 0; i--) {
				if (board.getCharAt(row, i) == player) {
					//add all tiles between player's sign
					for (int j = i + 1; j != col; ++j) {
						changes.add(new Point(row, j));
					}
					break;
				} else if (board.getCharAt(row, i) == empty)
					break;
			}
		}
		// check row right
		if (col < board.getSize() - 2 && board.getCharAt(row, col + 1) == opp) {
			for (int i = col + 2; i < board.getSize(); i++) {
				if (board.getCharAt(row, i) == player) {
					//add all tiles between player's sign
					for (int j = i - 1; j != col; --j) {
						changes.add(new Point(row, j));
					}
					break;
				}

				else if (board.getCharAt(row, i) == empty)
					break;
			}
		}
		// check col up
		if (row > 1 && board.getCharAt(row - 1, col) == opp) {
			for (int i = row - 2; i >= 0; i--) {
				if (board.getCharAt(i, col) == player) {
					//add all tiles between player's sign
					for (int j = i + 1; j != row; j++) {
						changes.add(new Point(j, col));
					}
					break;
				} else if (board.getCharAt(i, col) == empty)
					break;
			}
		}
		// check col down
		if (row < board.getSize() - 1 && board.getCharAt(row + 1, col) == opp) {
			for (int i = row + 2; i < board.getSize(); i++) {
				if (board.getCharAt(i, col) == player) {
					//add all tiles between player's sign
					for (int j = i - 1; j != row; j--) {
						changes.add(new Point(j, col));
					}
					break;
				}

				else if (board.getCharAt(i, col) == empty)
					break;
			}
		}

		// check diagonal up left
		if (row > 1 && col > 1 && board.getCharAt(row - 1, col - 1) == opp) {
			int j = col - 2;
			for (int i = row - 2; i >= 0 && j >= 0; i--, j--) {
				if (board.getCharAt(i, j) == player) {
					int l = j + 1;
					for (int k = i + 1; k != row && l != col; k++, l++) {
						changes.add(new Point(k, l));
					}
					break;
				} else if (board.getCharAt(i, j) == empty)
					break;
			}
		}

		// check diagonal up right
		if (row > 1 && col < board.getSize() - 1 && board.getCharAt(row - 1,
				col + 1) == opp) {
			int j = col + 2;
			for (int i = row - 2; i >= 0 && j < board.getSize(); i--, j++) {
				if (board.getCharAt(i, j) == player) {
					int l = j - 1;
					for (int k = i + 1; k != row && l != col; k++, l--) {
						changes.add(new Point(k, l));
					}
					break;
				}

				else if (board.getCharAt(i, j) == empty)
					break;
			}
		}

		// check diagonal down right
		if (row < board.getSize() - 1 && col < board.getSize() - 1
				&& board.getCharAt(row + 1, col + 1) == opp) {
			int j = col + 2;
			for (int i = row + 2; i < board.getSize() && j < board.getSize(); i++, j++) {
				if (board.getCharAt(i, j) == player) {

					int l = j - 1;
					for (int k = i - 1; k != row && l != col; k--, l--) {
						changes.add(new Point(k, l));
					}
					break;
				}

				else if (board.getCharAt(i, j) == empty)
					break;
			}
		}

		// check diagonal down left
		if (row < board.getSize() - 1 && col > 1 && board.getCharAt(row + 1,
				col - 1) == opp) {
			int j = col - 2;
			for (int i = row + 2; i < board.getSize() && j >= 0; i++, j--) {
				if (board.getCharAt(i, j) == player) {

					int l = j + 1;
					for (int k = i - 1; k != row && l != col; k--, l++) {
						changes.add(new Point(k, l));
					}
					break;
				}

				else if (board.getCharAt(i, j) == empty)
					break;
			}
		}

		//return list
		return changes;
	}


}
