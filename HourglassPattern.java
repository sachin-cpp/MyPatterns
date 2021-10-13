/**
 * Author:  Soumen Roy
 * Date:    13 October 2021 (Wednesday)
 */
public class HourglassPattern {

	public static void main(String[] args) {
		System.out.println("-------HourGlass----------");
		System.out.println();
		
		int[][] arr2 = new int[5][5];
		for (int i = 0; i < arr2.length; i++) {
			for (int j = 0; j < arr2[i].length; j++) {
				if(i==0||i==4) {
				System.out.print("*");
				}
				else if(i==1||i==3) {
					if(j==0||j==4) {
						System.out.print(" ");
					}else
						System.out.print("*");
				}
			    else if(i==j)
					System.out.print("  *  ");
			}
			System.out.println();
		}

	}

}
