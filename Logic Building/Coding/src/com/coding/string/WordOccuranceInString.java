	package com.coding.string;
	
	import java.util.HashMap;
	import java.util.Map;
	import java.util.Scanner;
	
	public class WordOccuranceInString {
	
		public static void main(String[] args) {
			Scanner sc =  new Scanner(System.in);
			
			System.out.println("Enter the String");
			String str = sc.nextLine();
			
			String []arr = str.split(" ");
			
			Map<String , Integer> map = new HashMap<>();
			
			for(String word : arr) {
				if(map.containsKey(word)) {
					map.put(word, map.get(word)+1);
				}
				else {
					map.put(word, 1);
				}
			}
		      System.out.println(map);
		}
	
	}
