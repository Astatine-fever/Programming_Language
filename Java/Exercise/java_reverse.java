package Exercise;

import java.util.Scanner;

class GFG {
  public static void main(String[] args) {

    String str, nstr = "";
    Scanner sc = new Scanner(System.in);

    char ch;

    System.out.print("Enter a String Value ");
    str=sc.next();
    
    for (int i = 0; i < str.length(); i++) 
    {
      ch = str.charAt(i); // extracts each character
      nstr = ch + nstr; // adds each character in front of the existing string
    }
    System.out.println("Reversed word: " + nstr);
  }
}