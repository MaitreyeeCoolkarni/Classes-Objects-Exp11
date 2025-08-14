//Experiment 1

#include <iostream>
using namespace std;
#include<string>

int main() {
    
    class Student{
       public:
       string name;
       int age;
       char Section;
       float result;
    };
    
 Student S1{"Maitreyee",19,'A',90};
 Student S2{"Saee",18,'A',98.2};
 Student S3{"Avani",18,'A',98.2};
 

Student arr[3]={S1,S2,S3};

for(int i=0;i<3;i++){
    cout<<"The name is :"<<arr[i].name<<endl;
    cout<<" ";
    cout<<"The age is: "<<arr[i].age<<endl;
    cout<<" ";
    cout<<"The section is:"<<arr[i].Section<<endl;
    cout<<" ";
    cout<<"The result is:"<<arr[i].result<<endl;
}

}
