package com.coding;

import java.util.Scanner;

public class CoupaSumPairs {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the array size");
		int n = sc.nextInt();
		
		// declare an array
		int arr[] = new int[n];
		
		for(int i = 0 ; i < arr.length ; i++) {
			arr[i]=sc.nextInt();
		}
		
		int pairs=0;
		int sum=0;
		
		for(int i = 0 ; i < n ; i++) {
			for(int j = i + 1; j< n ;j++) {
				if(arr[i]*arr[j]>=6) {
					pairs++;
					sum+=arr[i]*arr[j];
					
				}
			}
		}
		System.out.println(pairs);
		System.out.println(sum);

	}

}
