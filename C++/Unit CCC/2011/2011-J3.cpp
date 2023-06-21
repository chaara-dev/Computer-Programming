#include "..\..\common.h"

int main() {
    int firstTerm, secondTerm, sequenceLength;
    cout << "Enter the first number: "; cin >> firstTerm;
    cout << "Enter the second number: "; cin >> secondTerm;
    sequenceLength = 2;

    while (true){
        int temp = firstTerm;
        firstTerm = secondTerm;
        secondTerm = temp - secondTerm;
        sequenceLength++;
        if (secondTerm > firstTerm){
            break;
        }
    }
    
    cout << sequenceLength << endl;
    return 0;
}