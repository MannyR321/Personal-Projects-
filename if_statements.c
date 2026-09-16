#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
int main(){


    int age = 0;


    printf("enter your age: ");
    scanf("%d" ,&age);


if(age >= 65){
    printf("you are a senior");
}
else if(age >= 18){
printf("you are an adult");
}

else if(age < 0){
    printf("you havent been born yet");
}

else if(age == 0){
printf("you are a new born");
}

else{
printf("you are a child");
}
    return 0;
}
    

    int main(){

bool isStudent = true;

if(isStudent == true){

    printf("your are a student");
}
else{

    printf("you are not a student");
}

        return 0;
    }
        */

        int main(){


char name[50] = "";

printf("Enter your name: ");
fgets(name, sizeof(name),stdin);
name[strlen(name) - 1] = '\0';


if(strlen(name) == 0 ){
    printf("you did not enter your name");

}
else{
    printf("Hello %s", name);
}
            return 0;
        }