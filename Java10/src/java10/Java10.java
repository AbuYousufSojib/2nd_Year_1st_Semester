
package java10;

import java.util.Scanner;

public class Java10 {
    int num1, num2;
   void display(int x, int y){
        num1=x;
        System.out.println(num1+" ");
   }
        
}
class Integer extends Java10
{
    
   @Override
   void display(int x, int y)
    {
        num1=x;num2=y;
        System.out.println("Number1 = "+num1);
        System.out.println("Number2 = "+num2);
    }
}
class override
{

    public static void main(String[] args) {
       int m,n;
       System.out.println("Enter two integers: ");
       Scanner in = new Scanner(System.in);
       m = in.nextInt();
       n = in.nextInt();
       Integer obj = new Integer();
       
       obj.display(m,n);
    }
    
}
