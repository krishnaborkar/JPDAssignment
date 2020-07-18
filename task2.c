#include <stdio.h>

void seatArrangment(int);

void userInput() {
    int numberOfTestcase, seatNumber;
    printf("Number of testcases :");
    scanf("%d", &numberOfTestcase);
    
    for (int i=0; i<numberOfTestcase; i++){
        printf("Enter the seat number: ");
        scanf("%d", &seatNumber);
        seatArrangment(seatNumber);
    }
    
}

void seatArrangment(int seatNumber) {
    int seat = seatNumber % 12;
    switch (seat) {
        case 1:
            printf("%d %s\n", (seatNumber + 11), "WS");
            break;
        case 2:
            printf("%d %s\n", (seatNumber + 9), "MS");
            break;
        case 3:
            printf("%d %s\n", (seatNumber + 7), "AS");
            break;
        case 4:
            printf("%d %s\n", (seatNumber + 5), "AS");
            break;
        case 5:
            printf("%d %s\n", (seatNumber + 3), "MS");
            break;
        case 6:
            printf("%d %s\n", (seatNumber + 1), "WS");
            break;
        case 7:
            printf("%d %s\n", (seatNumber - 1), "WS");
            break;
        case 8:
            printf("%d %s\n", (seatNumber - 3), "MS");
            break;
        case 9:
            printf("%d %s\n", (seatNumber - 5), "AS");
            break;
        case 10:
            printf("%d %s\n", (seatNumber - 7), "AS");
            break;
        case 11:
            printf("%d %s\n", (seatNumber - 9), "MS");
            break;
        default:
            printf("%d %s\n", (seatNumber - 11), "WS");
            break;
    }
}


int main() {
    userInput();
    return 0;
}
