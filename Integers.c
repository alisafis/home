#include <stdio.h>

double number0;
int i, j;
bool isinteger = true;


int main(){
    printf("Enter a number\n");
    scanf("%lf",&number0); //We ask the user for a number.

    int n=10;
    int integer = (int) number0;

    while(true){
        integer = integer/10; //I divide the number by 10...
        j++;   //And keep count of j - j represents the number's digits before the comma.
        if(integer==0){ //Eventually the div will reach zero. This means the digits of the integer are over.
            break; //And so we break out of the initially infinite loop.
        }
    }

//I use the logic: a double can only have 17 digits. //Provided the user gives us a correct number,
    for(i=1; i <= 17-j; j++){   //we shall commence the 'for' loop 17-j times.
        double decimal = number0; 
        decimal = decimal * n; //I multiply the number by n, which initially is 10.
        integer = (int) decimal; //Then I convert it to an integer...
        if(integer % 10 != 0){ //And this way, with mod10, I can check if the digit is zero or not.
            isinteger=false; //Amongst the max 17-j digits, after the comma, if one is not 0, we have a double.
            break; //Hence we break out of the loop.
        } //In the opposite scenario, our number is an integer.
        n = n*10; //Don't forget to multiply n by 10! (So we can keep moving to the next digit each time.)
    }

    if(isinteger){
        printf("The number you provided us with is an integer.");
    }else{
        printf("Your number is not an integer.");
    }
    return 0;
}
