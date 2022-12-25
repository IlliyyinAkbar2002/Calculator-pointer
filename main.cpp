// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
#include <stdio.h>
#include<stdlib.h
using namespace std;

void Clear(){
    system("clear");
}


int main() {
    
    // Call clearscreen function
    Clear();
    
    // Declare variable
    int num1, num2;
    int *ptr1, *ptr2;
    char result;
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    // Write C++ code here
    cout << "Create Program Calculator pointer\n";
    cout << "===========================\n";
    
    // Let user want calculate number by 4 operator
    cout << "Select the operation to calculate number\n";
    printf(" 1. (+) Addition operator\n");
    printf(" 2. (-) Substraction operator\n");
    printf(" 3. (*) Multiplacation operator\n");
    printf(" 4. (/) Divided operator\n");
    scanf("%c", &result);
    cout << "Enter your 2 number to calculate\n";
    scanf("%d%d", &num1, &num2);
    
    switch(result){
        case '1' :
            printf("%d + %d = %d", num1, num2, (*ptr1 + *ptr2));
            break;
        case '2' :
            printf("%d - %d = %d", num1, num2, (*ptr1 + *ptr2));
            break;
        case '3' :
            printf("%d * %d = %d", num1, num2, (*ptr1 + *ptr2));
            break;
        case '4' :
            if(*ptr2 == 0){
                cout << "You can't divided by 0";
                return 0;
            }
            printf("%d / %d = %0.1f", num1, num2, (*ptr1 /(double) *ptr2));
            break;
        default :
            cout << "Wrong choice and try again!";
    }
    return 0;
}
