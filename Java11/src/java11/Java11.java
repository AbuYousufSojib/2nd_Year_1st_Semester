
package java11;

import java.util.Scanner;
class Test
{
    void display()
    {
        char c;
        double num1,num2;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter any symbol character '+','-','*','/' ");
        c = in.next().charAt(0);
        System.out.println("Enter two numbers :");
        num1 = in.nextDouble();
        num2 = in.nextDouble();
        double output;
        switch(c)
        {
            case '+':
            	output = num1 + num2;
                break;

            case '-':
            	output = num1 - num2;
                break;

            case '*':
            	output = num1 * num2;
                break;

            case '/':
            	output = num1 / num2;
                break;

            default:
                System.out.printf("You have entered wrong operator");
                return;
        }

        System.out.println(num1+" "+c+" "+num2+"= "+output);
    }
}
public class Java11 {

    public static void main(String[] args) {
        Test t1 = new Test();
        t1.display();
    }
}
