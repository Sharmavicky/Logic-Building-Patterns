#include <iostream>
using namespace std;


/*
                1 
                A B
                1 2 3
                A B C D
                1 2 3 4 5

                even number 'i': we print characters
                odd number 'i': we print numbers
*/

class Alpha_Numeric {
    public:
    void alpha_numeric(int n=5) { // alpha-numeric staircase pattern
        for (int i=1; i<=n; i++) {
          if (i % 2 == 0) { // even nue of "i"
            for (int j=65; j<65+i; j++) {
              cout << char(j) << " ";
            }
          }else { // odd nue of "i"
            for (int j=1; j<=i; j++) {
              cout << j << " ";
            }
          }
          cout << endl;
        }
      };
};


// Main Function
int main() {
    Alpha_Numeric().alpha_numeric();
    return 0;
}