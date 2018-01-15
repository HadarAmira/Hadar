package player;
/**
 * enum PlayerSign.
 */
public enum PlayerSign {
	X(88),O(79),Z(30);
	
	int val;
	
	PlayerSign(int val){
		this.val=val;
	}
	/**
	 * this method returns the player sign.
	 * @return
	 */
	public int getVal(){
		return val;
	}
}
