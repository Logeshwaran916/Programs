import java.io.*;
import java.util.*;
class Primetwo
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int a,b,i,j,flag;
System.out.println("enter lower bound of the interval");
a=sc.nextInt();
System.out.printf("enter upper bound of the interval");
b=sc.nextInt();
System.out.printf("prime numbers between %d %d are");
for(i=a;i<=b;i++)
{
if(i==1)
{
continue;
}
flag=1;
for(j=2;j<=i/2;++j)
{
if(i%j==0)
{
flag=0;
break;
}
}
if(flagg==1)
{
System.out.println(i);
}
}
}
}
