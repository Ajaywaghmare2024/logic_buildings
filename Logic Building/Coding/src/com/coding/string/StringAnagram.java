package com.coding.string;

import java.util.Arrays;

public class StringAnagram {

	public static void main(String[] args) {
		String str1 =  "grab";
		String str2 = "brag";
		
		if(str1.length()== str2.length()) {
			char[] carr1 = str1.toCharArray();
			char[] carr2 = str2.toCharArray();
			
			Arrays.sort(carr1);
			Arrays.sort(carr2);
			
			if(Arrays.equals(carr1, carr2)== true) {
				System.out.println(str1 +"="+str2 +" is a anagram String");
			}
			else {
				System.out.println(str1 +"="+str2 +" is a not anagram String");
			}
		}

	}

}
