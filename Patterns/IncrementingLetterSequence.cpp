#include <iostream>
using namespace std;

/*
                A
                B B
                C C C
                D D D D
                E E E E E
*/

class IncrementingLetterSequence {
    public:
    void incrementing_lettersequence(int n=5) {
        for (int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout << char('A' + i) << " ";
            }
            cout << endl;
        }
    };
};

// Main Function
int main() {
    IncrementingLetterSequence().incrementing_lettersequence();
    return 0;
}