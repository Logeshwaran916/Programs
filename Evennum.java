import java.io.*;
import java.util.*;
class Evennum
{
public static void main(String args[])
{
int n=0,i=0;
Scanner x=new Scanner(System.in);
System.out.println("enter the value");
n=x.nextInt();
for(i=1;i<n;i++)
{
if(i%2==0)
System.out.println(+i"");
}
System.out.println();
}
}
