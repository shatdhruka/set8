
import java.lang.*;
import java.io.*;
import java.util.Scanner;

class Vowels 
{
	public static void main (String[] args) 
	{
	        Scanner sc=new Scanner(System.in);
	        String str=sc.nextLine();
	        if(Vowels(str)!=0)
	        {
	            System.out.println("yes");
            }
            else
            {
                System.out.println("no");
            }
	}
 public static int Vowels(String str)
    {
        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i'
                    || str.charAt(i) == 'o' || str.charAt(i) == 'u')
            {
                count++;
            }
        }
        return count;
    }
               
}
