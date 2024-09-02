package com.coding.string;

public class CountNoOfOccuranceWord {

	public static void main(String[] args) {
	   String str  = "ram eat mango and ram play cricket";
	   
	   String [] arr = str.split(" ");
	   int count = 0 ;
	   
	   String word = "ram";
	   
	   for(int i  = 0 ; i < arr.length ; i++) {
		   if(arr[i].equals(word)) {
			   count++;
		   }
	   }
	   System.out.println(count);

	}

}
