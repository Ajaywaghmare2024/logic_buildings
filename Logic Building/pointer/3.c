/*Write a function isPrime, which accepts an integer as parameter and returns 1 if the number is prime and 0 otherwise.
 Use this function in main to display the first 10 prime numbers.*/
#include <stdio.h>
int main()
{int i, num, temp = 0; 
    printf("Enter any numb to Check for Prime: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++){
        if (num % i == 0){
            temp++;
            break;
            }

    }
    if (temp == 0 && num != 1){
        printf("%d is a Prime number", num);
        }
        else{

        printf("%d is not a Prime number", num);
        }

    return 0;

}