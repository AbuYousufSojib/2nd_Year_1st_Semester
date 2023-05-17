
package java8;

class Java8 {
    int length, width,l;
    void input1(int x, int y)
    {
        length = x;
        width = y;
    }
    int rectArea()
    {
        return(length*width);
    }
    void input2(int x)
    {
        l = x;
    }
    int squareArea()
    {
        return(l*l);
    }
}
class RectangleArea
{
    public static void main(String[] args) {
        int area1,area2,area3;
        Java8 rect1 = new Java8();
        Java8 squa = new Java8();
        
        rect1.input1(20,6);
        area1 = rect1.rectArea();
        System.out.println("RectArea = "+area1);
        
        squa.input2(20);
        area2 = squa.squareArea();
        System.out.println("SquareArea1 = "+area2);
        
        squa.input2(6);
        area3 = squa.squareArea();
        System.out.println("SquareArea2 = "+area3);
    }
    
}
