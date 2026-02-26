/*Problem Name:-   */
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define yes cout << YES << endl;
#define no cout << NO << endl;
#define pb push_back


class Teacher{
private:
    double salary;

public:
    //properties / attributes
    string name;
    string dept;

    //methods / functions
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter for private variable salary
    void setSalary(double newSalary){
        salary = newSalary;
    }

    //getter for private variable salary
    double getSalary(){
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Hasib";
    t1.dept = "CSE";
    // t1.salary = 50000;

    t1.setSalary(60000);

    cout << "Name: " << t1.name << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    
return 0;
}