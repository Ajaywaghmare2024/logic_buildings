//2. Write a program, which accepts two integers and an operator as a character (+ - * / ), 
//performs the corresponding operation and displays the result.

#include <stdio.h>

int main(){
	int a,b,opt;
	
	printf("Enter first integer : ");
	scanf("%d",&a);
	printf("Enter second integer : ");
	scanf("%d", &b);
	
	printf("\n Please select one of the options :\n");
	printf("1. addition \n");
	printf("2. subtraction \n");
	printf("3. Multiplication \n");
	printf("4. Division \n\n");
	
	scanf("%d", &opt);
	fflush(stdin);
	
	switch(opt){
		case 1:
			printf("\n %d + %d = %d ", a,b,a+b);
			break;
		case 2:			
			printf("%d - %d = %d", a,b,a-b);
			break;
		case 3:
			printf("%d * %d = %d",a,b,a*b);
			break;
		case 4:
			printf("%d / %d = %d",a,b,a/b);
			break;
		default:
			printf("Improper input!");
	}
	return 0;
}

//int main()
//{
//  int a,b,res;
//  char c;
//
//  printf("\n Enter any one operator +, -, *, / :");
//  scanf("%c",&c);
//  
//  switch(c)
//  {
//    case '+':
// printf("\n Enter two numbers: ");
//    scanf("%d%d",&a,&b);
// res=a+b;
//    printf("\n The sum is %d",res);
//    break;
//    case '-':
// printf("\n Enter two numbers: ");
//    scanf("%d%d",&a,&b);
// res=a-b;
//    printf("\n The difference is %d",res);
//    break;
//    case '*':
// printf("\n Enter two numbers: ");
//    scanf("%d%d",&a,&b);
//    res=a*b;
//    printf("\n The product is %d",res);
//    break;
//    case '/':
// printf("\n Enter two numbers: ");
//    scanf("%d%d",&a,&b);
//    res=a/b;
//    printf("\n The quotient is %d",res);
//    break;
//    default: printf ("\n Invalid entry");
//  }
//}

