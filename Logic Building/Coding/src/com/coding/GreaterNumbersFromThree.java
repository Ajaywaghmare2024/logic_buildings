package com.coding;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class GreaterNumbersFromThree {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the numbers num1 ,num2, num3");
		int num1=sc.nextInt();
		int num2=sc.nextInt();
		int num3=sc.nextInt();
		
		if(num1>=num2 && num1>=num3) {
			System.out.println(num1+"is greater");
		}
		else if(num2>=num1 && num2>=num3) {
			System.out.println(num2+" is greater");
		}
		else {
			System.out.println(num3+"is greater");
		}

		System.out.println("*********************************************");
		//Using the collection
		List<Integer>x=new ArrayList<>();
		   x.add(20);
		   x.add(80);
		   x.add(100);
		   System.out.println(Collections.max(x)+"is max number");
		
	}
	
	
	

}
