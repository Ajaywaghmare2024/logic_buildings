package com.coding;

import java.util.Scanner;

public class OddEvenNumber {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number:");
		int number=sc.nextInt();
		for(int i=0;i<=number;i++) {
			if(i%2==0) {
				System.out.println(i);
			}
//			if(i%2!=0) {
//				System.out.println(i);
//			}
		}

	}

}
