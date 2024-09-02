/*For the following standard functions, write corresponding user defined functions
 and write a menu driven program to use them. strcat, strcmp, strrev, strupr.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
  void main()
{
  char str[20],str1[20];
  int ch,i,j;
  
  do{  
    printf("\n1:Concatenate the Strings");
    printf("\n2:Compare the Strings");
    printf("\n3:reverse the Strings");
    printf("\n4:uppercase the string");
    printf("\n5:Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);

  switch(ch)
{
 case 1:
    printf("\nEnter the first string: ");
    scanf("%s",&str);
    printf("\nEnter the second string: ");
    scanf("%s",&str1);
    strcat(str,str1);
    printf("\nThe Concatenated string is: %s",str);
    break;

   case 2:
    printf("\nEnter the first string: ");
    scanf("%s",&str);
    printf("\nEnter the second string: ");
    scanf("%s",&str1);
    j=strcmp(str,str1);
    if(j==0)
  {
    printf("\nThe string is same");
  }
    else
  {
    printf("\nThe string is not same");
  }
    break;

    case 3:
    
    printf("\nEnter the string: ");
    scanf("%s",&str);
      strrev(str);
      printf("name=%s",str);
    break;
  case 4:
  
    printf("\nEnter the string: ");
    scanf("%s",&str);
    strupr(str);
    printf("\nsname=%s",str);

   case 5:
    exit(0);
    break;
   }
}
  while(ch!=5);
 return 0;
}


















