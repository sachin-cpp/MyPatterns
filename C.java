import java.util.*;
import java.io.*;
class C

{  
public  void C(int n)
{
    
for(int x=1;x<=n;x++)
{
for(int y=1;y<=n;y++)
{
if(x==1||y==1||x==n)
{
System.out.print("#");
}
else
{
System.out.print(" ");
}
}
System.out.println();
}
}
}
