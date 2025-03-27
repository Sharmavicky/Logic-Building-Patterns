#include <iostream>
using namespace std;

/*              *
                ***   pyramid start
               *****
              *******

            ******* interted pyramid star
             *****
              ***
               *
*/

class PyramidStar {
    public:
        void pyramidStar(int n = 3) {
            // outer loop
            for(int i=1; i<=n; i++) {
                // space
                for(int j=1; j<=n-i; j++) {
                    cout << " " << " ";
                }

                // stars
                for(int j=1; j<=2*i-1; j++) {
                    cout << "*" << " ";
                }

                cout << endl;
            }
        };

        void invertedPyramidStart(int n=3) {
            // outer loop
            for(int i=0; i<2*n-1; i++) {
                // inner loop
                for(int j=0; j<i; j++) {
                    cout << " " << " ";
                }

                // stars
                for(int j=0; j<(2*n-1)-2*i; j++) {
                    cout << "*" << " ";
                }

                cout <<  endl;
            }
        }
};


int main() {
    PyramidStar().pyramidStar(5);
    PyramidStar().invertedPyramidStart(5);
    return 0;
}