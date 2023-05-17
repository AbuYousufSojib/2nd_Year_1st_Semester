package java12;
import java.util.Scanner;
class student
{
    int roll;
    void getNumber(int n)
    {
        roll= n;
    }
    void putNumber()
    {
        System.out.println("Roll = "+roll);
    }
}

class Test extends student
{
    float part1, part2;
    void getMarks(float m, float n)
    {
        part1 = m;
        part2 = n;
    }
    void putMarks()
    {
        System.out.println("Marks obtained: ");
        System.out.println("Part1 = "+part1);
        System.out.println("Part2 = "+part2);
    }
}
interface Sports
{
    float sportWt = 6.0F;
    void putWt();
}

class Results extends Test implements Sports
{
    float total;
    @Override
    public void putWt()
    {
        System.out.println("Sport wt = "+sportWt);
    }
    void display()
    {
        total = part1+part2+sportWt;
        putNumber();
        putMarks();
        putWt();
        System.out.println("Total = "+total);
    }
}
public class Java12 {

    public static void main(String[] args) {
        Results obj = new Results();
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Roll Number: ");
        int a = in.nextInt();
        obj.getNumber(a);
        System.out.println("Enter two marks: ");
        float b = in.nextFloat();
        float c = in.nextFloat();
        obj.getMarks(b, c);
        obj.display();
    }  
}
