package java6;

import java.io.*;
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
        Formatter file = new Formatter("E:/javalabproblem/Java6/Test.txt");
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
        try
        {
            File file = new File("E:/javalabproblem/Java6/Test.txt");
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
public class Java6 {
    public static void main(String[] args){
        Test t1 = new Test();
        t1.display();
    }
}
