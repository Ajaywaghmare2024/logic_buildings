package com.coding.string;

public class SwapStringTwoVariable {

	public static void main(String[] args) {
		String a = "ram";
		
		String b = "ajay";
		
		a = a + b ;
		
		b = (a.substring(0,a.length()-b.length()));

		a = a.substring(b.length());
		
		System.out.println("A="+a+" " +"B="+b);
	}

}
