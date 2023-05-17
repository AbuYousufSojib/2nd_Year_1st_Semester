package java15;
import java.io.*;
class Test
{
    void display()
    {
        try{
               FileOutputStream fos = new FileOutputStream("rand.dat");
               DataOutputStream dos = new DataOutputStream(fos);

               for (int i=0;i<20 ;i++ ) {
                    dos.writeInt((int) (Math.random() * 100));
               }
               fos.close();
               dos.close();
               FileInputStream fis = new FileInputStream("rand.dat");
               DataInputStream dis = new DataInputStream(fis);
               for (int i=0;i<20 ;i++ )
               {
                    int n = dis.readInt();
                   System.out.print(n + " ");
               }
               fis.close();
               dis.close();
             }catch(IOException e) {}
    }
}
class  Java15
{
    public static void main(String[] args) 
    {
        Test t1 = new Test();
        t1.display();
    }
}