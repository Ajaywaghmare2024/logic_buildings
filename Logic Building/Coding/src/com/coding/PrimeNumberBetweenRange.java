package com.coding;

import java.util.Scanner;

public class PrimeNumberBetweenRange {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the start number:");
		int a= sc.nextInt();
		System.out.println("Enter the end number:");
		int b= sc.nextInt();
		
		for(int i = a ; i < b; i++) {
			boolean flag= false;
			for(int j = 2 ;  j < i ; j++) {
				if(i % j == 0 ) {
					flag= true;
					break;
				}
			}
			if(flag==false) {
				System.out.print(i+" ");
			}
		}

	}

}
