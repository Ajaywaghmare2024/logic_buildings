package com.coding.string;

import java.util.HashMap;
import java.util.Map;

public class LongestSubStringWithoutRepeatingCharacter {

	public static void main(String[] args) {

		String str = "abbaca";
		String longString = "";
		int maxLength = 0;

		for (int i = 0; i < str.length(); i++) {

			for (int j = i + 1; j < str.length(); j++) {
				
				
				String curr = str.substring(i, j + 1);
				Map<Character, Integer> map = new HashMap<>();
				for (int k = 0; k < curr.length(); k++) {
					map.put(curr.charAt(k), map.getOrDefault(curr.charAt(k), 0) + 1);
				}
				// assume that string has no repeating chars
				boolean flag = true;
				for (Map.Entry<Character, Integer> entry : map.entrySet()) {
					if (entry.getValue() > 1) {
						flag = false;
					}
				}
				if (flag == true) {
					if (curr.length() > maxLength) {
						maxLength = curr.length();
						longString = curr;
					}
				}
			}
		}

		System.out.println(longString);

	}

}
