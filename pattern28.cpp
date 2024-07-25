// Pattern 28

 // 1 2 3 4 5 5 4 3 2 1 
 // 1 2 3 4 * * 4 3 2 1
 // 1 2 3 * * * * 3 2 1
 // 1 2 * * * * * * 2 1
 // 1 * * * * * * * * 1


 #include <iostream>
 using namespace std ;

 int main(){
    int n ;
     cin >> n ;
     int i = 1 ;
     while(i<=n){
    //   loop for printing 1st set of numbers 

           int j = 1 ;
           while(j<=n-i+1){
            cout << j ;
            j = j + 1 ;
           }
    //   loop for printing 1st set of stars

            int k =1 ;
            while(k<=i-1){
                cout <<  "*" ;
                k = k +1 ;
            }
    //   loop for printing 2nd set of stars 

            int l = 1 ;
            while(l<=i-1){
                cout << "*" ;
                l = l + 1;
            }
    //   loop for printing 2nd set of numbers 
    
           int m = 1 ;
           while(m<=n-i+1){
            cout << n-i-m+2 ;
            m = m + 1 ;
           }
          cout << endl ;
          i = i + 1 ;
     }
   
    return 0 ;
 }