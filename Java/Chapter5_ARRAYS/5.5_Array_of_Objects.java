package Chapter5_ARRAYS;

class array_ex5
{
    public int roll_no;
    public String name;
    array_ex5(int roll_no, String name)
    {
        this.roll_no = roll_no;
        this.name = name;
    }
}
 
// Elements of the array are objects of a class array_ex5.
class array_ex5_0
{
    public static void main (String[] args)
    {
        // declares an Array of integers.
        array_ex5[] arr;
 
        // allocating memory for 5 objects of type array_ex5.
        arr = new array_ex5[5];
 
        // initialize the first elements of the array
        arr[0] = new array_ex5(1,"aman");
        // initialize the second elements of the array
        arr[1] = new array_ex5(2,"vaibhav");
        // so on...
        arr[2] = new array_ex5(3,"shikar");    
        arr[3] = new array_ex5(4,"dharmesh");        
        arr[4] = new array_ex5(5,"mohit"); 
        // accessing the elements of the specified array
        for (int i = 0; i < arr.length; i++)
            System.out.println("Element at " + i + " : " +
                        arr[i].roll_no +" "+ arr[i].name);
    }
}
