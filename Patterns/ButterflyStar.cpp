#include <iostream>
using namespace std;

/*
                *               *
                * *           * *
                * * *       * * *
                * * * *   * * * * 
                * * * * * * * * *
                * * * *   * * * *
                * * *       * * *
                * *           * *
                *               *
                
                outer loop -> 2*n-1

                Inner Loop (first half)
                stars -> i+1
                spaces -> 2*(n-i-1)

                Inner Loop (second half)
                stars -> 2*n-i-1
                spaces -> 2*n - 2*(2*n-i-1) -> 2*(i+1-n)

                first half is 'i' from 0 to n-1 (if i starts from 0)
                second half is 'i' from n to 2*n-1
*/

class ButterflyPattern {
    public:
    void butterfly_pattern(int n=5) {
        for(int i=0; i<2*n-1; i++) {// outer loop
            if (i < n) {// inner loop first half
                for(int j=0; j<i+1; j++) { // stars
                    cout << "*" << " ";
                }

                for(int j=0; j<2*(n-i-1); j++) { // spaces
                    cout << " " << " ";
                }

                for(int j=0; j<i+1; j++) { // stars
                    cout << "*" << " ";
                }
            } else if (i >= n) { // inner loop second half
                for(int j=0; j<2*n-i-1; j++) { // stars
                    cout << "*" << " ";
                }

                for(int j=0; j<2*(i+1-n); j++) { // spaces
                    cout << " " << " ";
                }

                for(int j=0; j<2*n-i-1; j++) { // stars
                    cout << "*" << " ";
                }
            }
            cout << endl;
        }
    }
};

//Main Function
int main() {
    ButterflyPattern().butterfly_pattern(9);
    return 0;
}
