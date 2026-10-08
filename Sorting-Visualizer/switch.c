#include <stdio.h>

int main( ){

int dayOfWeek = 0;

printf("Enter a day in the week (1-7):  ");
scanf("%d", &dayOfWeek);

switch(dayOfWeek){
  case 1:
  printf("it is monday");
  break;

  case2:
  printf("It is tuesday");
  break;

  case 3:
  printf("It is wednesday");
  break;

  case 4:
  printf("It is thursday");
  break;

  case 5:
  printf("It is Friday");
  break;

  case 6:
  printf("It is Saturday");
  break;

  case 7:
  printf("It is Sunday");
  break;
default:
printf("please only enter a number 1-7");

}
    return 0;
}