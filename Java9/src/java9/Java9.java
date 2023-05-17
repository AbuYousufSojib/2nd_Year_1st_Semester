
package java9;

class Room {
    float length, width, height;
    float input(float x, float y)
    {
        length = x;
        width = y;
        return (length * width);
    }
    float input(float x, float y, float z)
    {
        length = x;
        width = y;
        height = z;
        return(length*width*height);
    }
}
public class Java9
{
    public static void main(String[] args) {
        float area,volume;
        Room roomarea = new Room();
        area = roomarea.input(50,7);
        System.out.println("Room area = "+area);

        Room roomvolume = new Room();
        volume = roomarea.input(50,7,15);
        System.out.println("Room volume = "+volume);
    }
    
}
