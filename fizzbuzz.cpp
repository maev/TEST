
#include <iostream>
using namespace std;

int main(){
 int x, fizz, buzz, fizzbuzz;

 
 for(int x = 1; x <= 100; x++){
      fizz = x%3;
      buzz = x%5;
      fizzbuzz = x%15;
      
       if (fizzbuzz == 0)
         cout<<"fizzbuzz"<<"   ";
       else if(fizz == 0)
         cout<<"fizz"<<"   ";
      else if (buzz == 0)   
         cout<<"buzz"<<"    ";
     
      else
         cout<<x<<"    ";
         
         
         
         }   
    
    
    getchar();
    
}
