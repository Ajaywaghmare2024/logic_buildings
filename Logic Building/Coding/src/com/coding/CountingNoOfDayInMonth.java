package com.coding;

import java.util.Scanner;

public class CountingNoOfDayInMonth {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
				System.out.println("Enter month and year:");
				int month = sc.nextInt();
				int year = sc.nextInt();
				
		if((month == 2)&& (year %4== 0) || ((year %100 != 0 ) &&( year%400 ==0))) {
			System.out.println("number of days present in month is 29");
		}
		else if(month == 2) {
			System.out.println("number of days in month is 28");
		}
		else if(month ==1 ||month == 3 ||month ==5 || month ==7 || month == 8 ||
				month == 10 || month == 12) {
			System.out.println("number of days in month 31");
		}
		else {
			System.out.println("number of days 30");
		}
	}

}
