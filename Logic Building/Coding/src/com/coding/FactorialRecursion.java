package com.coding;

import java.util.Scanner;

public class FactorialRecursion {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int num = sc.nextInt();

		int res = factorial(num);
		System.out.println(res);
	}

	private static int factorial(int n) {
		if(n== 0 || n ==1 )
			return 1;
		return n*factorial(n - 1);
	}

}
