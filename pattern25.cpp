// Pattern 25 

// 1 2 3 4
//   2 3 4
//     3 4
//       4


#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
    //   loop for printing spaces 
      int space =  1;
      while(space <= i-1){
         cout << " ";
         space = space + 1 ;
      }
    //   loop for printing numbers 
    int j = 1 ;
    while(j<=n-i+1){
       cout << i+ j -1 ;
       j = j + 1;
    }
    cout << endl;
    i = i + 1 ;
    }
    return 0 ;
}