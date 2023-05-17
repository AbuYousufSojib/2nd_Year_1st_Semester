
package java16;
import java.io.*;
class Test
{
    void display()
    {
        try
        {
            File infile = new File("input.dat");
            infile.createNewFile();
            File outfile = new File("output.dat");
            outfile.createNewFile();
            
            System.out.println("File has been created");
            FileReader ins = new FileReader(infile);
            FileWriter outs = new FileWriter(outfile);
            int ch;
            while((ch = ins.read())!=-1)
            {
                outs.write(ch);
            }
             ins.close();
             outs.close();
        }
        catch(IOException e)
        {
            System.out.println(e);

        }
    }
}
public class Java16 {

    public static void main(String[] args) {
        Test t1 = new Test();
        t1.display();
    }
    
}
 