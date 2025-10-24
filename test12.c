#include <stdio.h>
#define pa printf("-------------------------------\n");

int main(){
    int number, result;
    int i;

    pa
    printf("        Multplication Table\n");
    pa
    printf("Enter number :");
    scanf("%d", &number);
    pa

    for(i = 1 ; i <= 12; i = i + 1){ // ++i, i++, i += i
        result = number * i;
        printf("%d x %d = %d\n", number, i, result);
    }

    pa

    return 0;
}