// Pattern 18 

// D 
// C D
// B C D
// A B C D


#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1;
    while(i<=n){
        int j = 1 ;
        while(j<=i){
            char ch = 'A' +j -i + n -1 ;
            cout << ch ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1 ;
            }
    return 0 ;
}