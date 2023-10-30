ackage Patterns;

import java.util.Scanner;

public class Star {

public static void main(String[] args) {

Scanner sc = new Scanner(System.in);

System.out.println("Enter the number of rows: ");

int rows = sc.nextInt();

for (int i = 0; i <= rows - 1; i++) { //For loop for Rows

for (int j = 0; j <= i; j++) { //For loop for Col

System.out.print(" "); // blank space

}
