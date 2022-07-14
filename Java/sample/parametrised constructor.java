package sample;

class test1 {
    int a;
    String b;

    test1(int i, String j) {
        a = i;
        b = j;
        System.out.println("Id is " + a + "Name is " + b);
    }

    /*
     * void display()
     * {
     * System.out.println("Id is " + a + "Name is " + b);
     * }
     */

}

class test2 {
    public static void main(String[] args) {
        test1 t1 = new test1(255, "Prasanna");
        test1 t2 = new test1(125, "siva");
    }

}
