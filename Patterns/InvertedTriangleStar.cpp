#include <iostream>
using namespace std;

/*
            *****
            ***
            **
            *
*/

class TrianglePatterns {
    public:
        void triangleNumber(int n=5) {
            // outer loop
            for(int i=0; i<n; i++) {
                // inner loop
                for(int j=0; j<i+1; j++) {
                    cout << i+1 << " ";
                }
                cout << endl;
            }
        };

        void invertedTriangleNumber(int n=5) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n-i; j++) {
                    cout << n-i << " ";
                }
                cout <<  endl;
            }
        };

        void triangleStar(int n=5) {
            // outer loop
            for(int i=0; i<n; i++) {
                // inner loop
                for(int j=0; j<i+1; j++) {
                    cout << "*" << " ";
                }
                cout << endl;
            }
        };

        void invertedTriangleStar(int n=5) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n-i; j++) {
                    cout << "*" << " ";
                }
                cout <<  endl;
            }
        };
};

// main function
int main() {
    TrianglePatterns().invertedTriangleStar();
    return 0;
}