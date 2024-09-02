package com.coding.string;

import java.util.HashMap;
import java.util.Map;

public class CharacterOccuranceInString {

	public static void main(String[] args) {
		String str = "ajay waghhhhhhhmare";
		
		char []arr = str.toCharArray();
		Map<Character , Integer> map = new HashMap<>();
		
		for(char ch : arr ) {
			if(ch !=' ') {
				if(map.containsKey(ch)) {
					map.put(ch, map.get(ch)+1);
				}
				else {
					map.put(ch, 1);
				}
			}
		}
		for(Map.Entry<Character, Integer>me : map.entrySet()) {
			if(me.getValue()>1) {
			System.out.println(me.getKey());
			}
		}
		
	}

}
