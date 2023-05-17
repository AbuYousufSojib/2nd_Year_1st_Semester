package java3;

import java.util.Scanner;
class Test
{
    void display()
    {
        int n,i,j;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter triangle range: ");
        n = in.nextInt();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
public class Java3 {
public static void main(String[] args) {
        Test t1 = new Test();
        t1.display();
    }
    
}
