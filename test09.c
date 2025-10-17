#include <stdio.h>
#define showline printf("-------------------------------\n")

int main()
{

    int bus_number; // int (%d), long int (%ld)

    showline;
    printf("    Bus Number information\n");
    showline;
    printf("Enter bus number: ");
    scanf("%d", &bus_number);
    showline;
    switch (bus_number)
    {
    case 57:
        printf("Go to Pinklao, Bangkhunnon\n");
        break;
    case 3:
        printf("Go to Sanam Luang, Ladproao\n");
        break;
    case 71:
        printf("Go to Hua Lamphong Yaowarat\n");
        break;
    case 56:
        printf("Go to Bang Lamphu Sqphan Krungthon\n");
        break;
    case 539:
        printf("Anusawari Chai Samsen\n");
        break;
    default:
        printf("Don\'t have data\n");
    }
    showline;

    return 0;
}
