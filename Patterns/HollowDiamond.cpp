#include <iostream>
using namespace std;

/*
                * * * * * * * * * *
                * * * *       * * * *
                * * *             * * *
                * *                   * *
                *                        *
                *                        *
                * *                   * *
                * * *             * * *
                * * * *       * * * *
                * * * * * * * * * *
                
                outer loop -> 2*n

                spaces (first half) -> i*2
                spaces (second half) -> 2*n - 2*(i-n+1) -> 2(2*n-i-1)

                stars (first half) -> n-i
                stars (second half) -> (i-n)+1
*/

class HollowDiamond {
    public:
    void hollowdiamond(int n=5) {
        // outer loop
        for(int i=0; i<2*n; i++) {
            if (i < n) { // inner loop first half
                for(int j=0; j<n-i; j++) { // stars
                    cout << "*" << " ";
                }

                for(int j=0; j<i*2; j++) { // spaces
                    cout << " " << " ";
                }

                for(int j=0; j<n-i; j++) {
                    cout << "*" << " ";
                }
            } else if (i >= n) { // inner loop second half
                for(int j=0; j<(i-n)+1; j++) { // stars
                    cout << "*" << " ";
                }

                for(int j=0; j<2*(2*n-i-1); j++) { // spaces
                    cout << " " << " ";
                }

                for(int j=0; j<(i-n)+1; j++) {// stars
                    cout << "*" << " ";
                }
            }

            cout << endl;
        }
    };
};

// Main Function
int main() {
    HollowDiamond().hollowdiamond();
    HollowDiamond().hollowdiamond(6);
    HollowDiamond().hollowdiamond(10);
    return 0;
}