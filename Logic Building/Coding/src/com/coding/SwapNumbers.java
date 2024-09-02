package com.coding;

public class SwapNumbers {

	public static void main(String[] args) {
		
		// swap the numbers using third variable
		 int num1=10,num2=20;
		 
//		 System.out.println(" Before the swap num1= "+num1+"num2= "+num2);
//		 int temp=num1;
//		 num1=num2;
//		 num2=temp;
		 
//		 System.out.println("After the swapping num1="+num1+"num2="+num2);
//		 
//		 System.out.println("**********************************");
		 
		 // without using third variable
		 
		 num1=num1+num2;
		 num2=num1-num2;
		 num1=num1-num2;
		 
		 System.out.println("num1= "+num1+ "num2="+num2);
		

	}

}
