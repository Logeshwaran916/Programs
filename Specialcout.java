import java.io.*;
class Specialcout
{
public static void main(String args[])
{
String str="!@#Hello World @@";
int Upper=0,lower=0,numer=0,special=0;
for(int i=0;i<str.lenght();i++)
{
char ch=str.charAt(i);
if(ch>='A'&& ch<='z')
upper++;
else if(ch>='a' && ch<='z')
lower++;
else if(ch>='0' && ch<='9')
number++;
else
Special++;
}
System.out.println("lower case letter is:"+lower);
System.out.println("Upper case letter is:"+upper);
System.out.println("number"+number);
System.out.println("Special characters :"+special);
}
}
