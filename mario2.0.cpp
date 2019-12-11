#include <iostream>
using namespace std;

void mario (int number, string high);

int main() {
    int high;

    do {
    cout << "請輸入高:";
    cin >> high;
     } while (high < 0 || high > 8);

    for (int i = 1 ; i <= high ; i++) {
        mario ( high-i ," ") ;
        mario ( i ,"*") ;
        mario ( 2 ," ") ;
        mario ( i ,"*") ;
        cout << "\n";
    }   
}
void mario( int number, string high) {
    for ( int i=0; i < number; i++ ) {
        cout << high;
    }
}
