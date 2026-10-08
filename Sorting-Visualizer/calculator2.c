#include <stdio.h>


int main (){

char operator = '\0';
double number1 = 0.0;
double number2 = 0.0;
double result =0.0;

printf("enter the first number: ");
scanf("%lf",&number1);

printf("enter the operator (+ - * /): ");
scanf(" %c",&operator);   //clear new linecharacter from buffer

printf("enter the second number: ");
scanf("%lf",&number2);


switch(operator){
case'+':
    result = number1 + number2;
    break;
    case'-':
    result = number1 - number2;
    break;
    case'*':
    result = number1 * number2;
    break;
    case '/':
      if(number2 == 0){
           printf("you cant divide by 0");

    }
else{
    result = number1 / number2;

}

    break;


        default:
        printf("Invalid character\n");
}

printf("Result %.3lf", result);


    return 0;
}