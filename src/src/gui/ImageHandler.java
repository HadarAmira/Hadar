package gui;

import javafx.scene.image.Image;
/**
 * Class  ImageHandler.
 *
 */
public class ImageHandler {
/**
 * members.
 */
	private static String[] names;

	private static void initialize() {
		names = new String[10];
		names[0] = "blue";
		names[1] = "cyan";
		names[2] = "green";
		names[3] = "orange";
		names[4] = "pink";
		names[5] = "purple";
		names[6] = "red";
		names[7] = "yellow";
		names[8] = "white";
		names[9] = "black";
		
	}
	/**
	 * this method returns the available colores.
	 * @return color.
	 */
	public static String[] getNames(){
		if(names==null)
			initialize();
		
		return names;
	}
/**
 * this method check if the name is valid.
 * @param name - color.
 * @return true if valid.
 */
	public static boolean validateName(String name) {
		if (names == null)
			initialize();

		for (String s : names) {
			if (name.toLowerCase().equals(s))
				return true;
		}

		return false;
	}
/**
 * this method returns the wanted color with dark background.
 * @param name- color.
 * @return image.
 */
	public static Image getDarkImage(String name) {
		if (names == null)
			initialize();

		String lower = name.toLowerCase();
		for (String s : names) {
			if (lower.equals(s))
				return new Image(ClassLoader.getSystemResourceAsStream(lower + "Dark.png"));
		}

		return null;
	}
	/**
	 * this method returns the wanted color with light background.
	 * @param name- color.
	 * @return image.
	 */
	public static Image getLightImage(String name) {
		if (names == null)
			initialize();

		String lower = name.toLowerCase();
		for (String s : names) {
			if (lower.equals(s))
				return new Image(ClassLoader.getSystemResourceAsStream(lower + "Light.png"));
		}

		return null;
	}
	/**
	 * this method returns the background.
	 * @param name- empty.
	 * @return image.
	 */
	public static Image getEmpty(int i,int j) {
		if((i+j)%2==0)
			return new Image(ClassLoader.getSystemResourceAsStream("empLight.png"));
		return new Image(ClassLoader.getSystemResourceAsStream("empDark.png"));
		
	}
}
