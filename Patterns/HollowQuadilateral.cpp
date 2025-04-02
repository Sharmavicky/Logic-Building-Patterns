#include <iostream>
using namespace std;

/*
                * * * * 
                *       *
                *       *
                *       *
                * * * * 
*/

class Hollow_Quadilateral {
    public:
    void hollow_rectangle(int n=4, int m=6) {
        for(int i=0; i<m; i++) {
            if (i == 0 || i == m-1) {
                for(int j=0; j<n; j++) {
                    cout << "*" << " ";
                }
            } else {
                for(int j=0; j<n; j++) {
                    if (j == 0 || j == n-1) {
                        cout << "*" << " ";
                    } else {
                        cout << " " << " ";
                    }
                }
            }
            cout << endl;
        }
    };
};

// Main Function
int main() {
    Hollow_Quadilateral().hollow_rectangle();
    return 0;
}