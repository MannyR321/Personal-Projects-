#include <stdio.h>

int main() {

float x;
float y;
char op;
float answer;
printf("Enter First Number: ");
scanf("%f", &x);
printf("Enter Seconde Number: ");
scanf("%f", &y);
printf("Enter Operation");
scanf(" %c", &op);
if (op == '+'){
    answer = x + y;
}
if (op == '-') {
    answer = x - y;
}
if (op == '*'){
    answer = x * y;
}
if (op == '/'){
    answer = x / y;
}
printf("answer: %f", answer);
return 0;
}

