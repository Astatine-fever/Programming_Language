package Chapter16_APPLETS;
import java.awt.*;  
class applet_prgm1
{  
public static void main(String[] args) 
{  
    Frame f1=new Frame("studytonight ==> Button Demo");  
    Button b1=new Button("Press Here");  
    b1.setBounds(80,200,320,168);  
    f1.add(b1);  
    f1.setSize(1280,768);  
    f1.setLayout(null);  
    f1.setVisible(true);   
}  
}