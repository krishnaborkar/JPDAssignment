#include <stdio.h>

void distributeChocolate(int, int);

void userInput();

void distributeChocolate(int numberOfChocolate, int numberOfStudent)
{
    int distribution = (numberOfStudent * (numberOfStudent + 1)) / 2;
    
    if (distribution > numberOfChocolate) {
        printf("%d\n", numberOfChocolate);
    }else {
        int value = numberOfChocolate - distribution;
        value = value % numberOfStudent;
        printf("%d\n", value);
    }
}

void userInput() {
    int numberOfTestcase, numberOfChocolate, numberOfStudent;
    printf("Enter the number of testcase:");
    scanf("%d", &numberOfTestcase);
    
    for (int i=0; i<numberOfTestcase; i++) {
        printf("Enter the number of chocolate and students:");
        scanf("%d %d", &numberOfChocolate, &numberOfStudent);
        distributeChocolate(numberOfChocolate, numberOfStudent);
    }
}


int main() {
    userInput();
    return 0;
}



