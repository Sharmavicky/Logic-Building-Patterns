#include <iostream>
using namespace std;

/*
                A
                A B
                A B C
                A B C D
                A B C D E

                A B C D E
                A B C D
                A B C
                A B
                A
*/

class Character_RightTriangle {
    public:
    void character_IncreasingRightAngledTriangle(int n=5) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout << char('A' + j) << " ";
            }
            cout << endl;
        }
    };

    void character_DecreasingRightAngledTriangle(int n=5) {
        for(int i=n; i>0; i--) {
            for(int j=0; j<i; j++) {
                cout << char('A' + j) << " ";
            }
            cout << endl;
        }
    }
};

// Main Function
int main() {
    Character_RightTriangle().character_IncreasingRightAngledTriangle();
    Character_RightTriangle().character_DecreasingRightAngledTriangle();
    return 0;
}