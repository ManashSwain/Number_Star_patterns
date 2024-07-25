// Pattern 20 

 //         *
 //      *  *
 //    * *  *
 // *  * *  *


 #include <iostream>
 using namespace std ;

 int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        // loop for printing spaces 
        int space = 1 ;
        while(space<=n-i){
           cout << " ";
           space = space + 1 ;
        }
    //    loop for printing stars
    int j = 1 ;
     while(j<=i){
        cout << "*";
        j = j + 1 ;
     };
      cout << endl;
      i = i + 1 ;
    }
    
    return 0 ;
 }