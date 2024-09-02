package com.coding;

public class MoveAllZerorsEnd {

	public static void main(String[] args) {
		int arr[] = {0,1,4,2,0,7,5,7,0,3};
		
		int j = 0;
	     
		for(int i = 0 ; i< arr.length ;i++) {
			if(arr[i] != 0)
				arr[j++] = arr[i];
		}
		
		while(j<arr.length) {
			arr[j++] = 0;
		}
		
		for(int  i = 0 ; i < arr.length ; i++) {
			System.out.print(arr[i]+" ");
		}
	}
}
