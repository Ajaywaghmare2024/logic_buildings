package com.coding;

import java.util.Scanner;

public class RightHalfPyramid {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number ");
		int num=sc.nextInt();
		
	
//		for (int i = 1; i <= num; i++) {
//			for (int j = 1; j <= num; j++) {
//				System.out.print(" *");
//			}
//			System.out.println();
//		}

//		
//		for(int i=1;i<=num;i++) {
//			for(int j=1;j<=i;j++) {
//				System.out.print("*");
//			}
//			System.out.println();
//		}
		
//		for(int i=num;i>=0;i--) {
//			for(int j=1;j<=i;j++) {
//				System.out.print("*");
//			}
//			System.out.println();
//		}
		
		
		for(int i = 1;i <= num; i++) {
			
			for(int j = 1;j <= num-i; j++) {
				System.out.print(" ");
			}
			for(int j = 1; j <= i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
   }

}
