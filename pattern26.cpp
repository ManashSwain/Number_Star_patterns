// Pattern 26

 //        1
 //      2 3
 //    4 5 6
 // 7 8 9 10

 #include <iostream>
 using namespace std ;

 int main(){
    int n ;
    cin >> n ;
      int num =1 ;
    int i = 1 ;
    
    while(i<=n){
    //    loop for printing spaces 
      int space = 1;
      while(space <= n-i){
         cout << " ";
         space = space +  1;
      }
    //   loop for printing numbers 
    
      int j = 1 ;
      while(j<=i){
        cout << num ;
        num = num + 1 ;
        j = j + 1 ;
      }
      cout << endl;
      i = i + 1;
    }
    return 0 ;
 }