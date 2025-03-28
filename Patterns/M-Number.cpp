#include <iostream>
using namespace std;

/*
                1      1
                12    21
                123  321
                12344321

                limit for spaces: 2*n - 2*(i+1) = 2*(n-(i+1))

                where 0 < n < 10
*/


class M_Number {
    public:
    void m_number(int n=4) {
        // outer loop
        for(int i=0; i<n; i++) {
            // inner loops
            for(int j=0; j<i+1; j++) { // first part numbers
                cout << j+1 << " ";
            }

            for(int j=0; j<2*(n-(i+1)); j++) { // second part spaces
                cout << " " << " ";
            }

            for(int j=i+1; j>0; j--) { // third part reverse numbers
                cout << j << " ";
            }

            cout << endl;
        }
    }
};

// Main Function
int main() {
    M_Number().m_number(10);
    return 0;
}
