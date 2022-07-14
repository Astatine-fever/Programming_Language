package sample;

class methodex {
    public void adda() {
        System.out.println(" This method requires object");
        add1();
    }

    public static void add1() {
        methodex m1 = new methodex();

        System.out.println(" This method does not requires object");
        m1.adda();

    }

}

class maina {
    public static void main(String args[]) {
        methodex m = new methodex();
        m.adda();

    }

}