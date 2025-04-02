#include <iostream>
using namespace std;

/*
                A
              A B A
            A B C B A
          A B C D C B A

       outer loop -> n
       spaces -> n-i-1
       left half -> i+1
       right half -> i-1
*/

class CharacterPyramid {
    public:
    void character_pyramid(int n=5) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n-i-1; j++) { // spaces
                cout << " " << " ";
            }

            for(int j=0; j<i+1; j++) { //left half
                cout << char('A' + j) << " ";
            }

            for(int j=i; j>0; j--) { // right half
                cout << char('A' + j-1) << " ";
            }

            cout << endl;
        }
    }
};

//Main Function
int main() {
    CharacterPyramid().character_pyramid();
    return 0;
}
