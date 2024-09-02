package com.coding;

import java.util.Scanner;

public class ReverseNumber {

	public static void main(String[] args) {
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter the number");
		int number = sc.nextInt();
		
		int temp = number , rev = 0 , rem;
		
		while(number > 0) {
			rem = number % 10;
			rev = (rev * 10) + rem;
			number /= 10;
		}
		System.out.println("The reverse number is :" + rev);
	
		
		//check it is palindrome or not
		
		if(temp == rev) {
			System.out.println("Its palindrome");
			
		}
		else {
			System.out.println("Not palindrome");
		}
	}

}
