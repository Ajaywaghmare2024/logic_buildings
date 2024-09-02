package com.coding;

import java.util.Scanner;

public class AmstrongNumber {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the number");
		int number=sc.nextInt();
		
		int temp,sum=0,rem=0;
		temp=number;
		while(number!=0) {
			rem=number%10;
			sum=sum+(rem*rem*rem);
			number=number/10;
		}
		if(temp==sum) {
			System.out.println("Number is amstrong");
		}
		else {
			System.out.println("number is not amstrong");
		}

	}

}
