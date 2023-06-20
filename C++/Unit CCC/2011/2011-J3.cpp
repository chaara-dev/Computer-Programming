#include "..\..\common.h"

int main() {
    int firstTerm, secondTerm, sequenceLength;
    cin >> firstTerm >> secondTerm;
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