#include <iostream>
using namespace std;

struct Student{
    string name;
    int ResistratioId;
    float CGPA;
};
void userInput(string name, int ResistratioId, float CGPA){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter Registration ID: ";
    cin>>ResistratioId;
    cout<<"Enter CGPA: ";
    cin>>CGPA;

}
void printInfo(string name, int ResistratioId, float CGPA){
    cout<<"Student Information:"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Registration ID: "<<ResistratioId<<endl;
    cout<<"CGPA: "<<CGPA<<endl;
}

int main(){
    string firstStudentName;
    string secondStudentName;
    int firstStudentId;
    int secondStudentId;
    float firstStudentCGPA;
    float secondStudentCGPA;
    userInput(firstStudentName, firstStudentId, firstStudentCGPA);
    userInput(secondStudentName, secondStudentId, secondStudentCGPA);
    printInfo(firstStudentName, firstStudentId, firstStudentCGPA);
    printInfo(secondStudentName, secondStudentId, secondStudentCGPA);
    return 0;

}