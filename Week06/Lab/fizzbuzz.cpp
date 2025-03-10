#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
 {
    srand(time(0));  
   
    int number = rand() % 20001 - 10000;  

  
    if (number < 0) {
        number = -number;
    }

    
    cout << "Number: " << number << endl;
    if (number % 3 ==0 && number % 5 == 0){
        cout << "Fizzbuzz" << endl;
    }

     else if (number % 3 == 0) {
        cout << "Fizz" <<endl; 
    } 
    else  if (number % 5 == 0) {
        cout << "Buzz" << endl;
    }
   
    

    return 0;
}
