package com.coding.string;

import java.util.HashMap;
import java.util.Map;

public class FindDuplicateWordInString {

	public static void main(String[] args) {
		String str = "Big black bug  bit a big black dog on his big black nose";
		
		String [] words=str.toLowerCase().split(" ");
		
		// declare a map
		Map<String , Integer> map = new HashMap<>();
		
		for(String w : words) {
			if(map.containsKey(w)){
				map.put(w,map.get(w)+1);
			}
			else {
				map.put(w,1);
			}
		}
		
		for(Map.Entry<String , Integer> me : map.entrySet()) {
			if(me.getValue()>1) {
				System.out.println(me.getKey());
			}
			  
		}

	}

}
