package com.coding;

public class MissingNoArray {

	public static void main(String[] args) {
		int arr[] = { 1, 2, 4, 5 };
		int sum = 0;
		int n = arr.length+1;
		int missNo = (n * (n + 1)) / 2;

		for (int i : arr) {
			sum += i;
		}
		System.out.println(missNo - sum);

	}
}
