package board;
/**
 * class Point.
 *
 */
public class Point {
	/**
	 * members.
	 */
	private int row;
	private int col;
/**
 * constructor.
 * @param row - the given row.
 * @param col - the given column.
 */
	public Point(int row, int col) {
		this.row = row;
		this.col = col;
	}
/**
 * this method returns the wanted row.
 * @return row.
 */
	public int getRow() {
		return row;
	}
/**
 * this method returns a point from a given string.
 * @param s - the given string.
 * @return point.
 */
	public Point getPointFromString(String s) {
		int row = 0, col = 0;
		boolean comma = false;
		// iterate string
		for (int i = 0; i < s.length(); i++) {
			// separator
			if (s.charAt(i) == ',') {
				comma = true;
				continue;
			}
			// not a number
			if (s.charAt(i) < '0' || s.charAt(i) > '9') {
				col = -1;
				row = -1;
				return new Point(row, col);
			}
			// translate number
			if (!comma) {
				row *= 10;
				row += s.charAt(i) - '0';
			} else {
				col *= 10;
				col += s.charAt(i) - '0';
			}

		}
		// translate to board coordinates
		row--;
		col--;

		return new Point(row, col);
	}
/**
 * this method returns the wanted column.
 * @return - column.
 */
	public int getCol() {
		return col;
	}
/**
 * this method change the row according to a given value.
 * @param row - the given value.
 */
	public void setRow(int row) {
		this.row = row;
	}
/**
 * * this method change the column according to a given value.
 * @param col - the given value.
 */
	public void setCol(int col) {
		this.col = col;
	}
/**
 * this method checks if the points are equal.
 * @param o - the given point.
 * @return true if equal.
 */
	public boolean equals(Point o) {
		return col == o.col && row == o.row;
	}

}
