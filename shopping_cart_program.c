#include <stdio.h>
#include <string.h>

int main(){

//shopping cart program


char item [40] = "";
float price = 0.0f;
int quantity =0;
char currency = '$';
float total = 0.0f;

printf("what item would you like to buy: ");

fgets(item, sizeof(item), stdin);


printf("what is the price for each: " );
scanf("%f",&price);

printf("how many would you like?: ");
scanf("%d",&quantity);

total = price * quantity;

printf("\nYou have bought %d %s", quantity, item);

printf("the total is: %c%.2f", currency, total);

    return 0;
}


