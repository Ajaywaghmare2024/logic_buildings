package com.coding;

public class NeonNumber {
   public static void main(String[] args) {  
	   int number = 45;
	   int rem = 0 , sum = 0;
	   
	   int square = number * number;
	   
	   while(square > 0 ) {
		  rem = square % 10;
		  
		  sum += rem ;
		  square /= 10;
	   }
	   
	   if(number == sum ) {
		   System.out.println("the number is Neon ");
	   }
	   else {
		   System.out.println("Number is not neon");
	   }
   }
}
