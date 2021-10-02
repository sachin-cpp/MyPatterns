package ImpossibleZone;
import java.io.*;
class Hexq
{
    public static void main(String args[])
    {
        
        while(true)
        {
            int r=(int)((2*(Math.random()-1)*100));
            char ch=(char)r;
            if(ch>='A'&&ch<='F')
            System.out.println((r/10)+""+ch);
        }
    }
}
