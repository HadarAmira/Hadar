package gameLogic;
import java.util.ArrayList;

import board.Board;
import board.Point;
import player.PlayerSign;

public interface Rule {

	/**
	 * @param player - the sign of the player who want to move.
	 * @param move - a point to put the disk on board.
	 * @param board - the given board.
	 * @return true if the player could put disk on move.
	 */
	public boolean validate(PlayerSign player, Point move, Board board);

	
	/**
	 * @param player - the sign of the player who want to move.
	 * @param move - a point to put the disk on board.
	 * @param board - the given board.
	 * @return true if the player could put disk on move.
	 */
	public ArrayList<Point> listChanges(PlayerSign player, Point move, Board board);

}
