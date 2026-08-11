#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    string name;
    int rollno;
    float cgpa;
};
int main(){
    student var1;
    var1.name = "shivam";
    //var1.rollno = 123;
    cout<<"enter roll number: ";
    cin>>var1.rollno;
    var1.cgpa = 9.5;

    student var2;
    var2.name="soham";
    var2.rollno = 11;
    var2.cgpa = 9.0;
cout<<"Name: "<<var1.name<<" "<<"rollno: "<<var1.rollno<<" "<<"cgpa: "<<var1.cgpa<<endl;
cout<<"Name: "<<var2.name<<" "<<"rollno: "<<var2.rollno<<" "<<"cgpa: "<<var2.cgpa<<endl;
return 0;
}
