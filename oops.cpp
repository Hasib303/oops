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
    //non-parameterize constructure
    // Teacher(){
    //     dept = "computer science";
    //     cout << "Hi, I'm the teacher" << endl;
    // }

    //parameterize constructure
    Teacher(string n, string d, string s, double sal){
        name = n; 
        dept = d;
        subject = s;
        salary = sal;

    }
    //properties / attributes
    string name;
    string dept;
    string subject;

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

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
    }

};

int main()
{
    // Teacher t1; //automatically call the default constructor
    // t1.name = "Hasib";
    // // t1.dept = "CSE";
    // // t1.salary = 50000;

    // t1.setSalary(60000);

    // cout << "Name: " << t1.name << endl;
    // cout << "Salary: " << t1.getSalary() << endl;
    // cout << t1.dept << endl;

    Teacher t1 ("Hasib", "CSE", "C++", 50000);
    t1.getInfo();


    
return 0;
}

