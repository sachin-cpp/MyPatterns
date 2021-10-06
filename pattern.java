public class Pattern
{
    public static void main(String[] args)
    {
        for(int i=1; i<=8; i++)
        {
            for (int k=2; k<=i; k++)
            {
                System.out.print("    ");
            }
            for(int j=1; j<=8-i+1; j++)
            {
                if(j == 1)
                    System.out.print("*");
                else
                    System.out.print("_*");
            }
            
            System.out.println();
        }
    }
}
