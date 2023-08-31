/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int number1, number2,sum;
    
    
    printf("Enter two integers; ");
    scanf("%d %d", &number1,&number2);
    
    //calculate the sum
    sum = number1 + number2;
    printf("%d + %d = %d ", number1, number2, sum);
    return 0;
    
}
