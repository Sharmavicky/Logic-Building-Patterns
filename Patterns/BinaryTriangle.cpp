#include <iostream>
using namespace std;

/*
                1
                0 1
                1 0 1
                0 1 0 1
                1 0 1 0 1

                outer loop -> n times
                inner loop -> i+1 times

                Explanatin: if both 'i' & 'j' are of same type (even or odd) than we will print '1' and any of them is different from other one than we will print '0'.
*/

class BinaryTriangle {
    public:
    void binary_triangle(int n=5) {
        for(int i=0; i<n; i++) { // outer loop
            for(int j=0; j<i+1; j++) {// inner loop
                if ((i%2 == 0 && j%2 == 0) || (i%2 != 0 && j%2 != 0)) {
                    cout << 1 << " ";
                }else {
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
    };
};

// Main Function
int main() {
    BinaryTriangle().binary_triangle(10);
    return 0;
}