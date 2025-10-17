#include <stdio.h> //printf, scanf
#define showline printf("------------------------------\n");

int main(){
    
    int bus_number; //int (%d), lomg int (%ld)

    showline
    printf("  Bus number information  \n");
    showline
    printf("Enter  bus number : ");
    scanf("%d", &bus_number);
    showline
    if(bus_number == 57){
        printf("Go to Pinklo, Bangkhnnon\n");
    }else if(bus_number == 3){
        printf("Go to Sanm Lumg , Ladproao\n");
    }else if(bus_number == 71){
        printf("Go to Hua Lamphong, Yaowarrat\n");
    }else if(bus_number == 56){
        printf("Go to Bang Lamphu, Sapam Krumgthon\n");
    }else if(bus_number == 539){
        printf("Go to Samsen Anusawari Chai");
    }else{
        printf("Don\'t have data\n");
    }
    showline

    return 0;
}