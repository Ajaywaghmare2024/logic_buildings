package com.coding.string;

import java.util.HashSet;
import java.util.Set;

public class RemoveDuplicateFromStringArray {

	public static void main(String[] args) {
		String[] str = {"abc","def","abc","wer","yut"};
		// by using set interface 
		
//		Set <String> set = new HashSet<>();
//		
//		for(String s : str) {
//			if(!set.add(s));
//		}
//		System.out.println(set);
		
		// by using normal for loop
		
		for(int i = 0 ; i <str.length; i++) {
			for(int j = i +1 ; j < str.length; j++) {
				if(str[i]== str[j]) {
					System.out.println(str[j]);
				}
			}
		}
	}

}
