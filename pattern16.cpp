// Pattern 16 

// A 
// B C 
// D E F 

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
     char ch = 'A' ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
       
        while(j<=i){
            cout << ch ;
            ch = ch + 1 ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}