package java2;
import java.util.Arrays;
import java.util.Scanner;
class Test
{
    void display()
    {
        int n,i;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter array size: ");
        n = in.nextInt();
        int[] num = new int[n];
        System.out.println("Enter array elements: ");
        for(i=0;i<n;i++)
        {
            num[i] = in.nextInt();
        }
        Arrays.sort(num);
        System.out.println("Descending: ");
        
        for(i=n-1;i>=0;i--)
        {
            System.out.print(num[i]+" ");
        }
    }
}
public class Java2 {
    public static void main(String[] args) {
        Test t1 = new Test();
        t1.display();
    }
}


    
