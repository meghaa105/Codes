/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Java_exam;

import java.util.Scanner;

/**
 *
 * @author jkin
 */
public class codef {
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int num1;
        int num2;
        int [] arr={2,3,5,7,11,13,17};
        int count=input.nextInt();
        for(int i=0;i<count;i++)
        {
            System.out.println("Enter number ");
            num1=input.nextInt();
            num2=input.nextInt();
            int dif=num1-num2;
            for(int j=0;j<7;j++)
            {
                if((dif%arr[j])==0)
                {   System.out.println("YES");
                    break;
                }
                else
                {
                    System.out.println("NO");
                    
                }
                
                
            }
            
            
            
        }
        
    }
    
}
