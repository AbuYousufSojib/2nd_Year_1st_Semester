package java14;
import java.awt.*;
import java.applet.*;
public class Java14 extends Applet
{
  
    int x1[] = {20, 120, 220, 20};
    int y1[] = {20, 120, 20, 20};
    int n1 = 4;
    int x2[] = {120, 220, 220, 120};
    int y2[] = {120, 220, 20, 120};
    int n2 = 4;
    @Override
    public void paint(Graphics g)
    {
        g.drawPolygon(x1, y1, n1);
        g.fillPolygon(x2, y2, n2);
    }
}
