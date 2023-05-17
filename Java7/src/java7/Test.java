
package java7;

import java.util.Scanner;

public class Test {
    public static void main(String[] args)
    {
        person1 obj = new person1();
        Scanner in = new Scanner(System.in);
        System.out.println("Enter name: ");
        obj.name = in.next();
        System.out.println("Enter roll: ");
        obj.roll = in.nextInt();
        System.out.println("Enter mark: ");
        obj.mark = in.nextInt();
        obj.display2();
        if(obj.mark<=100&&obj.mark>=80)
        {
            System.out.print("A+");
        }
        if(obj.mark<80&&obj.mark>=75)
        {
            System.out.print("A");
        }
        if(obj.mark<75)
        {
            System.out.print("F");
        }
        System.out.println();
    }
}
