#include <stdio.h>
#define pa printf("------------------\n");

int main(){
    int number;

    pa
    printf(" Even & 0dd Number\n");
    pa
    while ( 1 ){ // วนแบบ ifinite loop
        printf("Enter number : ");
        scanf ("%d" , &number);
        if(number <= 0){
            pa
            printf("Good bye");
            break;
        }
        if(number % 2 == 0){
            printf("Number is even number\n");
        }else{
            printf("Number is odd number\n");
        }
        pa
    }

    return 0;
}