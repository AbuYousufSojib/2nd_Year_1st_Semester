package java5;

import java.io.File;
import java.util.Scanner;
class Test 
{
    void display()
    {
        try
        {
            File file = new File("E:/javalabproblem/Java4/test.txt");
            Scanner in = new Scanner(file);
            while(in.hasNext())
            {
                String name = in.next();
                String roll = in.next();
                System.out.println("Name: "+name +"\nRoll: "+roll);
                
            }
        }
        catch(Exception e)
        {
            System.out.print(e);
        }
    }
}
public class Java5 {
    public static void main(String[] args) {
        Test t1 = new Test();
        t1.display();
    }    
}
