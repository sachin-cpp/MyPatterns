import java.io.*;
class A

{
public  void A(int n)
{
for(int x=1;x<=n;x++)
{
for(int y=1;y<=n;y++)
{
if(x==1||y==1||y==n||x==(n/2))
System.out.print("#");
else
System.out.print(" ");
}
System.out.println();
}
}
