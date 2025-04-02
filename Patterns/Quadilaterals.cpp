#include <iostream>
using namespace std;

/*
                * * * *     square
                * * * *
                * * * *
                * * * *
                

                * * * *
                * * * *
                * * * *
                * * * *
                * * * *     rectangle
*/

class Quadilaterals {
    public:
    void square(int n =5) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << "*" << " ";
            }
            cout << endl;
        }
    };

    void rectangle(int n = 4, int m = 6) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cout << "*" << " ";
            }
            cout << endl;
        }
    };
};

// Main Function 
int main() {
    Quadilaterals().square();
    Quadilaterals().rectangle();
    return 0;
}