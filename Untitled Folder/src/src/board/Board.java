package board;
import player.PlayerSign;

/**
 * class board.
 *
 */

public class Board {
/**
 * members.
 */
	private PlayerSign[][] board;
	private int size;
	private PlayerSign sign1, sign2;

	/**
	 *  creates the game board. size - the wanted size of the board sign1 - a.
	 * sign that represents player1 sign2 - a sign that represents player2.
	 * @param size - the board size.
	 * @param sign1 - the first player sign.
	 * @param sign2 - the second player sign.
	 */
	public Board(int size, PlayerSign sign1, PlayerSign sign2) {
		board = new PlayerSign[size][size];
		for (int i = 0; i < board.length; i++) {
			for (int j = 0; j < board.length; j++) {
				board[i][j] = PlayerSign.Z;
			}
		}
		this.sign1 = sign1;
		this.sign2 = sign2;
		this.size = size;
		initialize();
	}

	/**
	 * copy constructor origin - a board to copy.
	 * @param origin - the origin board.
	 */
	public Board(Board origin) {
		this.size = origin.size;

		board = new PlayerSign[size][size];
		for (int i = 0; i < board.length; i++) {
			for (int j = 0; j < board.length; j++) {
				board[i][j] = origin.getCharAt(i, j);
			}
		}
		this.sign1 = origin.sign1;
		this.sign2 = origin.sign2;
	}

	/**
	 * arrange the board to its starting shape.
	 */
	public void initialize() {
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				if ((i == (size / 2) - 1 && j == (size / 2) - 1) || (i == size / 2 && j == size / 2)) {
					board[i][j] = sign1;
				} else if ((i == (size / 2) - 1 && j == size / 2) || (i == size / 2 && j == (size / 2) - 1)) {
					board[i][j] = sign2;
				} else {
					board[i][j] = PlayerSign.Z;
				}
			}
		}
	}

	/**
	 * returns the size of the board.
	 */
	public int getSize() {
		return size;
	}

	/**
	 *  returns the char at the wanted point.
	 * @param row - the given row.
	 * @param col - the given column.
	 * @return player sign.
	 */
	public PlayerSign getCharAt(int row, int col) {
		return board[row][col];
	}

	/**
	 * returns the char at the wanted point.
	 * @param p - the given point.
	 * @return player sign.
	 */
	public PlayerSign getCharAt(Point p) {
		return board[p.getRow()][p.getCol()];
	}

	/**
	 * move - a point to change player - the sign to change to.
	 * @param move - the point.
	 * @param player- the player sign.
	 */
	public void setTile(Point move, PlayerSign player) {
		board[move.getRow()][move.getCol()] = player;
	}

	/**
	 * row - the row of the point to change col - the col of the point to change.
	 * player - the sign to change to.
	 * @param row - the given row.
	 * @param col - the given column.
	 * @param player - the given layer sign.
	 */
	public void setTile(int row, int col, PlayerSign player) {
		board[row][col] = player;
	}
/**
 * this method returns the player's score.
 * @param sign - the player sign.
 * @return score.
 */
	public int getScoreByPlayer(PlayerSign sign) {
		int score=0;
		for (int i = 0; i < board.length; i++) {
			for (int j = 0; j < board.length; j++) {
				if(board[i][j]==sign)
					score++;
			}
		}
		return score;
	}
}