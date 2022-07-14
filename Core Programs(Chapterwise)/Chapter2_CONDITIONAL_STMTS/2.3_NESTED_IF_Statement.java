package Chapter2_CONDITIONAL_STMTS;

import java.util.*;

//Java Program to demonstrate the use of Nested If Statement.    
class JavaNestedIfExample 
{      
public static void main(String[] args) 
{      
    //Creating two variables for age and weight    
    int age;    
    float weight;      
    //applying condition on age and weight    
    System.out.println("Age and Weight");
    try (Scanner sc = new Scanner(System.in)) {
        age=sc.nextInt();
        weight = sc.nextFloat();
    }
    if(age>=18){      
        if(weight>50){    
            System.out.println("You are eligible to donate blood");    
        } else{  
            System.out.println("You are not eligible to donate blood");    
        }  
    } else{  
      System.out.println("Age must be greater than 18");  
    }  
}  }  