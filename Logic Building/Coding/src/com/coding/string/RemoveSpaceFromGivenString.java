package com.coding.string;

import java.util.Scanner;

public class RemoveSpaceFromGivenString {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the string");
		String str=sc.nextLine();
		
		System.out.println("Before="+str);
		
		str=str.replaceAll("\\s","");
		System.out.println(str);
		
	}

}
