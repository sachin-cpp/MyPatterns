import java.io.*;
class E
{
public  void E(int n)
{
        
for(int x=1;x<=n;x++)
{
for(int y=1;y<=n;y++)
{
if(x==1||x==n||y==1||x==n/2&&y!=n)
System.out.print("#");
else
System.out.print(" ");
}
System.out.println();
}
}
}
