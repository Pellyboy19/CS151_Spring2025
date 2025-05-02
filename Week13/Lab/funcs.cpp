#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

// Function prototypes
void sayHello(string name = "World"){

cout<<"Hello, "<< name<< endl;
}

void allUpper(string& name){
    for(int i =0;i < name.length(); i++){
     name[i]=   toupper(name[i]);
    }
}

int main (){
    string str1="hello";
    


    sayHello("Eve");
    allUpper(str1);

cout <<str1;

 return 0;   
}
