#include<iostream>
using namespace std;
class Employee {
    int employeeId;
    string employeeName;
    string employeeDepartment;
    double employeeSalary;
    public:
        Employee(){
            employeeId = 0;
            employeeName = "";
            employeeDepartment = "";
            employeeSalary = 0.0;
        }
        Employee(int id, string name){
            employeeId = id;
            employeeName = name;
            employeeDepartment = "";
            employeeSalary = 0.0;
        }
        Employee(int id, string name, string department, double salary){
            employeeId = id;
            employeeName = name;
            employeeDepartment = department;
            employeeSalary = salary;
        }
        void calculatePay(){
            cout << "Salary for " << employeeName << " (ID: " << employeeId << ") is Rs" << employeeSalary << endl;
        }
        void calculatePay(double bonus){
            double totalPay = employeeSalary + bonus;
            cout << "Salary for " << employeeName << " (ID: " << employeeId << ") with bonus is Rs" << totalPay << endl;
        }
        void calculatePay(int hrsWorked, double hourlyRate){
            double totalPay = hrsWorked * hourlyRate;
            cout << "Salary for " << employeeName << " (ID: " << employeeId << ") for " << hrsWorked << " hours at Rs" << hourlyRate << " per hour is Rs" << totalPay << endl;
        }
        void calculatePay(double bonus, double taxPercentage){
            double totalPay = (employeeSalary + bonus) - (employeeSalary + bonus) * taxPercentage / 100;
            cout << "Salary for " << employeeName << " (ID: " << employeeId << ") with bonus and tax is Rs" << totalPay << endl;
        }
        void updateProfile(string department){
            employeeDepartment = department;
            cout << "Profile updated for " << employeeName << " (ID: " << employeeId << "). New department: " << employeeDepartment << endl;
        }
        void updateProfile(double salary){
            employeeSalary = salary;
            cout << "Profile updated for " << employeeName << " (ID: " << employeeId << "). New salary: Rs" << employeeSalary << endl;
        }
        void updateProfile(string department, double salary){
            employeeDepartment = department;
            employeeSalary = salary;
            cout << "Profile updated for " << employeeName << " (ID: " << employeeId << "). New department: " << employeeDepartment << ", New salary: Rs" << employeeSalary << endl;
        }
        void displayProfile(){
            cout << "Employee ID: " << employeeId << ", Name: " << employeeName << ", Department: " << employeeDepartment << ", Salary: Rs" << employeeSalary << endl;
        }
};
int main() {
    Employee emp1;
    Employee emp2(101, "Alice");
    Employee emp3(103, "Charlie", "IT", 60000);
    emp3.calculatePay();
    emp3.calculatePay(5000);
    emp3.calculatePay(160, 300);
    emp3.calculatePay(5000, 10);
    emp3.updateProfile("Finance");
    emp3.updateProfile(60000);
    emp3.updateProfile("IT", 70000);
    Employee emp4(emp3);
    Employee emp5(102, "Bob" , "Marketing", 50000);
    emp5.calculatePay();
    emp5.updateProfile("Marketing", 55000);
    emp1.displayProfile();
    emp2.displayProfile();
    emp3.displayProfile();
    emp4.displayProfile();
    emp5.displayProfile();

    return 0;
}