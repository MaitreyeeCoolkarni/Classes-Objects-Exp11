#include <iostream>
using namespace std;

class MyClass {
public:

    void myFun(); 
    
    void method(){
    cout << "Hello" << endl;
    }
};


void MyClass::myFun() {
    cout << "Helloo" << endl;
}

int main() {
    MyClass M1;

    M1.method();
    M1.myFun();

    return 0;
}

/**Hello
Helloo**/
