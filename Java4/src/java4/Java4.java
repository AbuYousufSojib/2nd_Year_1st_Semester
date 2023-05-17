package java4;

import java.io.FileNotFoundException;
import java.util.Formatter;
import java.util.Scanner;
class Test
{
    void display()
    {
        try
        {
        System.out.println("File created successfully");
        System.out.println("Enter name and roll: ");
        Formatter file = new Formatter("E:/javalabproblem/Java4/test.txt");
        Scanner in = new Scanner(System.in);
        String name , roll;
        name = in.next();
        roll = in.next();
        file.format("%s\n%s\n",name,roll);
        file.close();
        }
        catch(FileNotFoundException e)
        {
            System.out.println(e);
        }
    }
}
public class Java4{
    public static void main(String[] args) {
        Test t1 = new Test();
        t1.display();
    }
    
}
