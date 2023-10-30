package Patterns;

import java.util.Scanner;

public class Star {

public static void main(String[] args) {

Scanner sc = new Scanner(System.in);

System.out.println("Enter the number of rows: ");

int rows = sc.nextInt();

for (int i = 1; i <= rows; i++) {

for (int j = i; j < rows; j++) { //Rows Loop

System.out.print(" "); // Blank Space

}

for (int k = 1; k <= i; k++) { //Cols Loop

System.out.print("*"); // Prints *

}

System.out.println("");

}

for (int i = rows; i >= 1; i--) {

for (int j = i; j <= rows; j++) { //Rows Loop

System.out.print(" ");  // Prints blank spaces

}

for (int k = 1; k < i; k++) { //Col Loop

System.out.print("*");  // Prints *

}

System.out.println(""); // New Line1

}

sc.close();

}

}
