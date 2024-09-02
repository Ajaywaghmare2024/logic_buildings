package com.coding.string;

import java.util.HashSet;
import java.util.Set;

public class RemoveDuplicateFromString {

	public static void main(String[] args) {
		String str = "abcddeefghh";
		
		StringBuilder sb = new StringBuilder(str);
		
		Set<Character> set = new HashSet<>();
		
		for(int i  = 0 ; i <str.length(); i++) {
			set.add(str.charAt(i));
		}
		
		for(char ch : set) {
			sb.append(ch);
		}
		
		System.out.println(set);
		
		
		

	}

	

}
