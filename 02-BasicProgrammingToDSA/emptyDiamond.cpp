#include <iostream>
using namespace std;


// 5
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************

int main() {
    int num;
    cin >> num;

    for (int i = 0; i <= num; i++) {
        for(int j = 0 ; j <= num-i ;j++){
            cout<<"*";
        }
        for(int j = 0;j < 2*i ;j++){
            cout<<" ";
        }
        for(int j = 0 ; j <= num-i ;j++){
            cout<<"*";
        }
        cout << endl;
    }
    for (int i = num-1; i >= 0; i--) {
        for(int j = 0 ; j <= num-i ;j++){
            cout<<"*";
        }
        for(int j = 0;j < 2*i ;j++){
            cout<<" ";
        }
        for(int j = 0 ; j <= num-i ;j++){
            cout<<"*";
        }
        cout << endl;
    }

   

    return 0;
}
