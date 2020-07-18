#include <stdio.h>

void userInput();
void distributeChocolate(int, int);

// step-1 : userInput()function will take input like number Of Testcases,number Of Chocolates and number Of Students.
// step-2 : pass the parameter numberOfChocolate and numberOfStudent in distributeChocolate() function.

void userInput() {
    int numberOfTestcase, numberOfChocolate, numberOfStudent;
    printf("Enter The Number Of Testcases:");
    scanf("%d", &numberOfTestcase);
    
    for (int i=0; i<numberOfTestcase; i++) {
        printf("Enter the Number Of Chocolates and Students:");
        scanf("%d %d", &numberOfChocolate, &numberOfStudent);
        distributeChocolate(numberOfChocolate, numberOfStudent);
    }
}

// step-3 : Distribution of Chocolates will be taken in the consideration. i.e.- less intelligent - k ,more intelligent - k+1... 
// step-4 : Based on the distribution 2 condition will occur. 1. distribution>Chocolates and 2.distribution<Chocolates.
// step-5 : Remaining Chocolates will be get through the if-else condition.

void distributeChocolate(int numberOfChocolate, int numberOfStudent)
{
    int distribution = (numberOfStudent * (numberOfStudent + 1)) / 2;
    
    if (distribution > numberOfChocolate) {
        printf("The Number Of Remaining Chocolates : %d \n", numberOfChocolate);
    }else {
        int value = numberOfChocolate - distribution;
        value = value % numberOfStudent;
        printf("The Number Of Remaining Chocolates : %d \n", value);
    }
}


// The program will started executing from this main function.

int main() {
    userInput();
    return 0;
}

