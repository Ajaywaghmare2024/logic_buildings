package com.coding;

import java.util.Scanner;

public class CoupaOccuranceMinimumElement {
	// create a pairs that be contains one in only one time

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the arrrya size:");
		int n = sc.nextInt();

		int arr[] = new int[n];

		for (int i = 0; i < arr.length; i++) {
			arr[i] = sc.nextInt();
		}
		int count = 0;

		// create a pairs
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				boolean flag = false;
				for (int k = i; k < j; k++) {
					if (arr[k] == 1) {
						flag = true;
						break;
					}
				}
				if (flag == true) {
					count++;
				}
			}

		}
		System.out.println(count);

	}

}
