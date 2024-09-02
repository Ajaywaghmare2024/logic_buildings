package com.coding;

import java.util.Scanner;

public class FibonacciByRecursion {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter the number");
		int num = sc.nextInt();
		int res= Fibonacci(num);
		System.out.println(res);
		
	}

	private static int Fibonacci(int n) {
		if(n <= 1) {
			return n;
		}
		return Fibonacci(n-1) + Fibonacci(n-2);
	}

}
