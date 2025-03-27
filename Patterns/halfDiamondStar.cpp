#include <iostream>
using namespace std;

/*
                *
                **
                ***
                ****
                ***
                **
                *
*/

class HalfDiamond {
    public:
    void halfdiamond(int n=4) {
        for(int i=0; i<2*n-1; i++) { //  outer loop
            if (i < n) { // first half (triangle star pattern)
                for(int j=0; j<i+1; j++) {
                    cout << "*" << " ";
                }
            } else if (i >= n) {// second half (inverted triangle star patter)
                for(int j=0; j<(2*n-1)-i; j++) {
                    cout << "*" << " ";
                }
            }
            cout << endl;
        }
    };

    void invertedHalfDiamond(int n=4) {
        for(int i=0; i<2*n-1; i++) {
            if (i < n) { // first-half 
                for(int j=0;j<n-i-1; j++) { // spaces
                    cout << " " << " ";
                }

                for(int j=0; j<i+1; j++) { // stars
                    cout << "*" << " ";
                }
            } else if (i >= n) { // second-half
                for(int j=0; j<i-n+1; j++) { // spaces
                    cout << " " << " ";
                }

                for(int j=0; j<2*n-1-i; j++) { // stars
                    cout << "*" << " ";
                }
            }
            cout << endl;
        }
    };
};

// Main Function
int main() {
    HalfDiamond().halfdiamond(5);
    HalfDiamond().invertedHalfDiamond(5);
    return 0;
};