package com.coding;

import java.util.Scanner;

public class CoupaMaximumOccurance {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the size of array:");
		int n= sc.nextInt();
		
		 // declare array
		int arr[]= new int[n];
		
		for(int i = 0 ; i < arr.length;i++) {
			arr[i]=sc.nextInt();
		}
		
		int curr=0;
		int maxi=0;
		
		for(int i = 0 ; i < n ; i++) {
			if(arr[i]==0) {
				curr=0;
			}
			else {
				curr=curr+1;
			}
			maxi=Math.max(curr,maxi);
		}
		System.out.println(maxi);

	}

}
