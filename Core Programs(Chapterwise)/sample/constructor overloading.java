package sample;

import java.util.Scanner;

class Student {
    int id;
    String name;
    int age;

    Student(int a, String c) // creating two arg constructor
    {
        id = a;
        name = c;
    }

    Student(int a, String c, int b) // creating three arg constructor
    {
        id = a;
        name = c;
        age = b;
    }

    void display() {
        System.out.println(id + " " + name + " " + age);
    }

    public static void main(String args[]) {
        int a, b;
        String c;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Student Id :");
        a = sc.nextInt();
        System.out.println("Student name: ");
        c = sc.next();
        System.out.println("Student age ");
        b = sc.nextInt();

        Student s1 = new Student(a, c);
        Student s2 = new Student(a, c, b);
        s1.display();
        s2.display();
    }
}
