
import java.util.Scanner;

public class  boxShape
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of lines");
        int n = sc.nextInt();
        int i,j;
        for(i=n/2;i>=1;i--)
        {
            for(j=1;j<=i;j++)
                System.out.print("*");
            for(j=n/2;j>i;j--)
                System.out.print("  ");
            for(j=i;j>=1;j--)
                System.out.print("*");
            System.out.println();
        }
        for(i=n/2;i<n;i++)
        {
            for(j=n/2;j<=i;j++)
                System.out.print("*");
            for(j=n;j>i+1;j--)
                System.out.print("  ");
            for(j=i;j>=n/2;j--)
                System.out.print("*");
            System.out.println();
        }
    }
}