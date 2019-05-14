package file;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
public class Fileline
{
public static void main(String args[])
{
File=f1=new File("input.txt");
int linecount=0;
FileReader fr=new FileReader(fr);
BufferedReader br=new BufferedReader(fr);
String s;
while((s=br.readLine())!=null)
{
linecount++;
}
fr.close();
System.out.println("number of line in the paragraph"+linecount);
}
}
