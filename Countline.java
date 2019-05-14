import java.io.*;
class Countline
{
public static void main(String args[])
{
int word=1;
String str="count number of words and spaces";
for(int i=0;i<str.length();++i)
{
if(str.charAt(i)=='')
word++;
}
System.out.println("number of words="+words);
System.out.println("number of spaces="(word-1));
}
}
