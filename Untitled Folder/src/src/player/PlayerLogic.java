package player;
import javafx.scene.image.Image;
/**
 *interface PlayerLogic.
 *
 */
public interface PlayerLogic {

	/**
	 * @return - the sign of this player.
	 */
	public PlayerSign getSign();
	/**
	 * 
	 * @param i - x coordinate.
	 * @param j - y coordinate.
	 * @return - the image of the player disk.
	 */
	public Image getImage(int i,int j);
	/**
	 * @return the name of the player.
	 */
	public String getName();
}
