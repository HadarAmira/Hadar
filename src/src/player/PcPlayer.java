package player;

import gui.ImageHandler;
import javafx.scene.image.Image;
/**
 * class PCpLAYER.
 *
 */
public class PcPlayer implements PlayerLogic {
/**
 * members.
 */
	private PlayerSign sign;
	private Image darkImage,lightImage;
	private String name;
/**
 * constructor.
 * @param sign - the given player sign.
 * @param name - the given name.
 */
	public PcPlayer(PlayerSign sign, String name) {
		this.sign = sign;
		darkImage = ImageHandler.getDarkImage(name);
		lightImage = ImageHandler.getLightImage(name);
		
		char[] nameArr = name.toCharArray();
		nameArr[0] = Character.toUpperCase(nameArr[0]);
		this.name = String.copyValueOf(nameArr);
		
		
	}
/**
 * this method returns the name.
 */
	public String getName() {
		return name;
	}
	/**
	 * this method returns the player sign.
	 */
	public PlayerSign getSign() {
		return sign;
	}

	
	/**
	 * this method returns image.
	 */
	@Override
	public Image getImage(int i,int j) {
		if((i+j)%2==0)
			return lightImage;
		return darkImage;
	}

}
