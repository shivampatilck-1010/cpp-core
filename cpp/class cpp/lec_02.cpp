// taking input from users and sum them all by using for loop
#include <iostream>
using namespace std;

void Totalsum(int num){
    int sum=0;
    for(int i=0;i<=num;i++){
        sum+=i;
    }
    cout<<"Sum of numbers from 0 to "<<num<<" is: "<<sum<<endl;
}
int main(){
    int num ; // num is the number entered by the user
    cout<<"Enter a number: ";
    cin>>num;
    Totalsum(num);
    return 0;

    // cout<<"Sum of numbers from 0 to "<<num<<" is: "<<Totalsum<<endl;
    // return 0;
    
}