#include <iostream>
using namespace std;
#include<string>

int main() {
    
    class Calc{
       public:
       int A;
       int B;
       
       void add(){
           cout<<(A+B);
       }
       
       void subtract(){
           cout<<(A-B);
       }
       
       void divide(){
        cout<<(A/B);
       }
       
       void multiply(){
        cout<<(A*B);
       }
       
       
    };
    
Calc C1;
cout<<"Enter the number ";
cin>>C1.A;
cout<<"Enter the number 2 ";
cin>>C1.B;

    cout << "The addition is: "<<endl;
    C1.add();
    
    cout<<" "<<endl;

    cout << "The subtraction is: "<<endl;
    C1.subtract();
    
    cout<<" "<<endl;

    cout << "The division is: "<<endl;
    C1.divide();
    
    cout<<" "<<endl;

    cout << "The multiplication is: "<<endl;
    C1.multiply();
    
    cout<<" "<<endl;

    return 0;
}

/**Enter the number 10
Enter the number 2 20
The addition is: 
30 
The subtraction is: 
-10 
The division is: 
0 
The multiplication is: 
200 **/
