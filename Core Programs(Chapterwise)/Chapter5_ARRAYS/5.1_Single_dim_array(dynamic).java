package Chapter5_ARRAYS;
import java.util.Scanner;


class array_ex1
{
    

    /**
     * @param args
     */
    public static void main(String[] args) 
    {
        int[] ar1 =new int[10];
        int i;
        System.out.println("Enter Values \n");
            for(i=0;i<ar1.length;i++)
        {
            Scanner sc = new Scanner(System.in);
            ar1[i]=sc.nextInt();
            
        }

        for(i=0;i<ar1.length;i++)
        {
            System.out.println("ar1[" + i +"] = "+ar1[i]);
        }
    }

}
