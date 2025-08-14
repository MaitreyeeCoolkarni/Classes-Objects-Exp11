#include <iostream>
using namespace std;
#include<string>

int main() {
    
    class Car{
       public:
       string brand;
       int cost;
       int year;
    };
    
 Car C1;
 Car C2;
 Car C3;
 

Car arr[3]={C1,C2,C3};

for(int i=0;i<3;i++){
    cout<<"The name is :"<<endl;
    cin>>arr[i].brand;
    cout<<"The year is: "<<endl;
    cin>>arr[i].year;
    cout<<" ";
    cout<<"The cost is:"<<endl;
    cin>>arr[i].cost;
    cout<<" ";
    
}

for(int i=0;i<3;i++){
    cout<<"The name is :"<<endl;
    cout<<arr[i].brand<<endl;
    cout<<"The year is: "<<endl;
    cout<<arr[i].year<<endl;
    cout<<" ";
    cout<<"The cost is:"<<endl;
    cout<<arr[i].cost<<endl;
    cout<<" ";
    
}
}
