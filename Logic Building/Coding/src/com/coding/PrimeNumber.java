package com.coding;

import java.util.Scanner;

public class PrimeNumber {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the number:");
		int number=sc.nextInt();
		int count = 0;
		if(number <= 1) {
			System.out.println("Number is not prime");
			return;
		}
		for(int i=2;i<=number/2;i++) {
			if(number%i==0) {
				count++;
			}
		}
		if(count>1) {
			System.out.println("Number is not prime");
		}
		else {
			System.out.println("number is prime");
		}

	}

}
