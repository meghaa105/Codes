/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hello.world;
import java.util.Scanner;
import javax.swing.JOptionPane;//important for dialog box functions

/**
 *
 * @author jkin
 */
public class HelloWorld {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
          
        // TODO code application logic here
        System.out.println("Hello World");
      //  System.out.println("Enter your name");
        Scanner input=new Scanner(System.in);//intialization of scanf
        //int value = input.nextInt();(scanf input integer)
        //String name =input.next();(scanf input string)
        //System.out.println("Name:"+name);(printf)
        //JOptionPane.showMessageDialog(null,"Welcome!");//Shows a dialog box with the following message
        //String name= JOptionPane.showInputDialog(null, "Name");//Takes an input inside a dialog box
        //JOptionPane.showMessageDialog(null,"Welcome! "+name);
        //String rad= JOptionPane.showInputDialog("Enter the radius");
        //int num1=Integer.parseInt(rad);//changes the data type from string to integer
        //String num3= JOptionPane.showInputDialog("Enter second number");
        //int num2=Integer.parseInt(num3);
        //double area=(num1*num1*3.14);
        //System.out.println("The area is :"+area);
        //JOptionPane.showMessageDialog(null,"The area is "+area);
        // final datatype CONSTANTNAME(it declares a variable as constant)
        final double PI=3.14;
        //By default the decimal value is of type double 
        // 1.0F (float)
        // 4L (long)
        long totalMilliseconds=System.currentTimeMillis();//gives milliseconds from 1 Jan 1970 (unixepoch Time)
        totalMilliseconds=totalMilliseconds/1000;
        long time1=totalMilliseconds%60;
        long totalmin=totalMilliseconds/60;
        long time2=(totalmin%60)+30;
        long hours=totalmin/60;
        long time3=(hours%24)+5;
        time3=time3%12;
        if(time2>60)
        {
            time2=time2%60;
            time3++;
        }
        long day=hours/24;
        long year=day/365;
        System.out.println("Time is "+time3+":"+time2+":"+time1);
        
        //Calculate LOAN PAYMENTS
        double LoanAmount = input.nextDouble();
        double Year=input.nextDouble();
        Year=Year*12;
        double interest=input.nextDouble();
        double numerator=LoanAmount*interest;
        double den1=1+interest;
        double den2=Math.pow(den1, Year);
        den2=1/den2;
        den2=1-den2;
        double answer=numerator/den2;
        System.out.println("The answer is :"+answer);
        
        
    }
    
}
