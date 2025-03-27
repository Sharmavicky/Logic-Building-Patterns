#include <iostream>
using namespace std;

/*
               *
              ***
             *****
            *******
             *****
              ***
               *
*/

class DiamondStar{
    public:
        void diamondStar(int n=4) {
            // outer loop
            for(int i=0; i<2*n-1; i++) {
                if (i < n) { // first half (pyramid star pattern)
                    // spaces
                    for(int j=0; j<n-i-1; j++) {
                        cout << " " << " ";
                    }
                    
                    // stars
                    for(int j=0; j<2*i+1; j++) {
                        cout << "*" << " ";
                    }
                } else if (n >= 4) { // second half (inverted pyramid star)
                    // spaces
                    for(int j=0; j<(i+1)-n; j++) {
                        cout << " " << " ";
                    }

                    // stars
                    for(int j=0; j<(2*n-1)-2*(i+1-n); j++) {
                        cout << "*" << " ";
                    }
                }

                cout << endl;
            }
        };
};

int main() {
    DiamondStar().diamondStar();
    return 0;
}