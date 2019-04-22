import java.io.*;
import java.util.*;
class Prime
{
public static void main(String args[])
{
int temp;
boolean isPrime=true;
Scanner scan=new Scanner(System.in);
System.out.println("enter any number");
int num=scan.nextInt();
scan.close();
for(int i=2;i<=num/2;i++)
{
temp=num%1;
if(temp==0)
{
isPrime=flase;
break;
}
}
if(isPrime)
System.out.println("the number is a palindrome"+num);
else
System.out.println("the number is not a palindrome"+num);
}
}
