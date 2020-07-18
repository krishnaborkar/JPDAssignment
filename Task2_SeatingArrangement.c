#include <stdio.h>

void seatArrangment(int);

//  1 step : userInput() will be use for taking input of number of TESTCASES and SEAT-NUMBER.
//  2 step : Loop will be executed depends on the number of TESTCASES. for ex - 2 TESTCASES = 2 times loop execution.
//  3 step : Loop will then called seatArrangment() function with argument as SEAT-NUMBER.

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

//  4 step : As per seating arrangement 12 seats will be taken in consideration.
//  5 step : So, seatNumber will be modulo by 12 and then various conditions will be checked.
//  6 step : Seat will get 12 different cases including 4 window seats,4 aisle seats and 4 middle seats.

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


//  The Program will start executing from the main function().

int main() {
    userInput();
    return 0;
}