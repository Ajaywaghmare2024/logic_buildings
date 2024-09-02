package com.coding.string;

import java.util.HashMap;
import java.util.Map;

public class FirstNonReaptingCharacter {

	public static void main(String[] args) {
		String str = "ABACDEFDB";
		
		char arr[] = str.toCharArray();
		
		Map<Character , Integer> map = new HashMap<>();
		
		for(char ch : arr) {
			if(map.containsKey(ch)) {
				map.put(ch, map.get(ch)+1);
			}
			else {
				map.put(ch, 1);
			}
		}
		System.out.println(map);
		for(Map.Entry<Character ,Integer> me: map.entrySet()) {
			if(me.getValue()==1) {
				System.out.println(me.getKey());
				break;
			}
		}
		
		// without using collection
		
		for(int i = 0 ; i < str.length() ; i++) {
			boolean flag = true;
			for(int j = 0 ; j < str.length() ;j++) {
				if(i != j && str.charAt(i) == str.charAt(j)) {
					flag = false;
					break;
				}
			}
			if(flag) {
				System.out.println(str.charAt(i));
				break;
			}
		}
		

	}

}
