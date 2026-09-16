#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
srand(time(NULL));
int secret = rand() % 100 +1;
int guess;
while (guess != secret) {
// code that repeats
printf ("Enter a guess: \n");
scanf("%i",&guess );
if (guess < secret) {
  printf ("Too Low!\n");
} else if  ( guess > secret) {
        printf ("Too high!\n");
}
}  
printf("Congratulations you won!");
return 0;

}