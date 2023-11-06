#include <iostream>
using namespace std;

int moveCount = 0;

void towerOfHanoi(int numDisks, char source, char auxiliary, char destination) {
    if (numDisks == 1) {
        moveCount++;
        return;
    }
    
    towerOfHanoi(numDisks-1, source, destination, auxiliary);
    moveCount++;
    towerOfHanoi(numDisks-1, auxiliary, source, destination);
}

int main() {
    int numDisks = 8;
    char source = 'A', auxiliary = 'B', destination = 'C';
    
    towerOfHanoi(numDisks, source, auxiliary, destination);
    
    cout << "Answer: " << moveCount << endl;
    
    return 0;
}

