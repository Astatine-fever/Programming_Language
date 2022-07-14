package sample;

import java.util.Scanner;

class multiclass1 {
    public int emp_no, age;
    public String emp_name, dept, gender;

}

class test {

    multiclass1 m1 = new multiclass1();

    public void useraccount() {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Employee Number ");
        m1.emp_no = sc.nextInt();
        System.out.println("Enter Employee Name ");
        m1.emp_name = sc.next();
        System.out.println("Enter Age ");
        m1.age = sc.nextInt();
        System.out.println("Enter your gender ");
        m1.gender = sc.next();
        System.out.println("Enter working department ");
        m1.dept = sc.next();
    }

    public void display() {
        System.out.println("Employee Name : " + m1.emp_name);
        System.out.println("Employee ID : " + m1.emp_no);
        System.out.println("Employee Age : " + m1.age);
        System.out.println("Employee Gender : " + m1.gender);
        System.out.println("Employee Department : " + m1.dept);
    }

}

class multiclass {

    public static void main(String args[]) {
        test t = new test();
        t.useraccount();
        t.display();

    }

}