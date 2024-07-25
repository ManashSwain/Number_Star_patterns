// Pattern 11 

// A A A
// B B B
// C C C


#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    char ch ='A';
    int i = 1 ;
    while(i<=n){ 
      int j = 1 ;
      while(j<=n){
        cout << ch ;
        j = j + 1 ;
      }
      cout << endl;
      ch = ch + 1 ;
      i = i  + 1 ;

    }
    return 0 ;
}