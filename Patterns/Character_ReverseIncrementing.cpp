#include <iostream>
using namespace std;

/*
                E
                D E
                C D E
                B C D E
                A B C D E
*/

class Character_ReverseIncrementing {
    public:
    void character_reverseincrementing(int n=5) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout << char('A' + (n-i-1)+j) << " ";
            }
            cout << endl;
        }
    };
};

// Main Function
int main() {
    Character_ReverseIncrementing().character_reverseincrementing();
    return 0;
}