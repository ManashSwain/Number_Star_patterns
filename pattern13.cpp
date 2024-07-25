// Pattern 13 

// A B C 
// D E F
// G H I 


#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    char ch = 'A';
    int i = 1 ;
    while(i<=n){
        int j =1 ;
        while(j<=n){
            cout << ch ;
            ch = ch +  1;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}