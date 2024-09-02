package com.coding.string;

public class ReverseUsingStringBuilder {

	public static void main(String[] args) {
		String str="Virat is batsman";
		StringBuilder sb=new StringBuilder(str);
		//sb.append(str);
		sb.reverse();
		System.out.println(sb);
		
		// by using String Buffer
		
		StringBuffer sbb=new StringBuffer(str);
		sbb.reverse();
		System.out.println(sbb);

	}

}
