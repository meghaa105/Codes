/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{   
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner input = new Scanner(System.in);
        int no_test_case=input.nextInt();
        int no_of_days=input.nextInt();
        int [] arr=new int[no_of_days];
        int i=0;
        for(i=0;i<no_of_days;i++)
        {
           arr[i]=input.nextInt();
        }
        
        
        int count=0;
        int j=0;
        int min=999;
        for(i=0;i< no_of_days;i++)
       {
           if(i<6)
           {
               min=arr[0];
               for(j=0;j<=i;j++)
               {
                   if(min>=arr[j])
                   {
                       min=arr[j];
                   }
               }
               if(arr[i]<=min)
               {
                   count++;
               }
           }
           else
           {
               min=arr[i-5];
               for(j=i-5;j<i;j++)
               {
                   if(min>=arr[j])
                   {
                       min=arr[j];
                   }
               }
               if(arr[i]<=min)
               {
                   count++;
               }
           }
       }
      System.out.println(count);
    }
        
        
      
       // int result = Phone_prices(arr,no_of_days);

        
    
	}
	
	
