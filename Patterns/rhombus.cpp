#include <iostream>
using namespace std;

/*          **** rhombus star pattern
              ****
               ****
                ****


                **** mirrored rhombus star pattern
               ****
              ****
             ****
*/

class Rhombus {
    public:
        void rhombusstartpattern(int n=4) {
            // outer loop
            for(int i=1; i<=n; i++) {
                // inner loop
                for(int j=1; j<=i-1; j++) {
                    cout << " " << " ";
                }

                // stars
                for(int j=1; j<=n; j++) {
                    cout << "*" << " ";
                }

                cout << endl;
            }
        };

        void mirroredrhombusstarpattern(int n=4) {
            // outer loop
            for(int i=1; i<=n; i++) {
                // inner loop
                for(int j=n-i; j>=1; j--) {
                    cout << " " << " ";
                }

                // stars
                for(int j=1; j<=n; j++) {
                    cout << "*" << " ";
                }

                cout << endl;
            }
        }
};

int main() {
    Rhombus().rhombusstartpattern();
    Rhombus().mirroredrhombusstarpattern();
    return 0;
}