// Pattern 27 

   //          1
   //       1  2  1
   //    1  2  3  2  1
   // 1  2  3  4  3  2  1

   #include <iostream>
   using namespace std ;

   int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
    //   loop for printing 1st spaces 
    int space1 = 1 ;
       while(space1 <= n-i){
         cout << " ";
         space1 = space1 + 1 ;
       }

    //    loop for printing 1st set of numbers 

    int j = 1 ;
    while(j<=i){
      cout << j ;
      j = j + 1 ;
    }

    // loop for printing 2nd set of numbers 

    int k = 1 ;
    while(k <=i-1){
      cout << i-k ;
      k = k + 1 ;
    }
    // loop for printing 2nd set of spaces 
    int space2 = 1 ;
    while(space2 <= n-i){
      cout << " " ;
      space2 = space2 + 1 ;
    }
    cout << endl ;
    i = i + 1 ;
    }
    return 0 ;
   }