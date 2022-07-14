package Chapter8_Interface;

import java.util.Scanner;

interface Drawable {
    void draw();

    default void msg() {
        System.out.println("default method1");

    }

    default int msg1()

    {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        return x;

    }
}

class Rectangle implements Drawable {
    public void draw() {
        System.out.println("drawing rectangle");
    }
}

class TestInterfaceDefault {
    public static void main(String args[]) {
        Drawable d = new Rectangle();
        int f;
        d.draw();
        d.msg(); // default method calling
        f = d.msg1();
        System.out.println("F=" + f);
    }
}