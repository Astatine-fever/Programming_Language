package Chapter16_APPLETS;
import java.awt.*;

class applet_prgm0 extends Frame
{
    applet_prgm0()
    {
        Button btn=new Button("Hello World");
        add(btn); 		//adding a new Button.
        setSize(640, 480);        //setting size.
        setTitle("My applet program");  //setting title.
        setLayout(new FlowLayout());	 //set default layout for frame.
        setVisible(false);           //set frame visibilty true.
    }

    public static void main (String[] args)
    {
        applet_prgm0 ap0 = new applet_prgm0();   //creating a frame.
    }
}