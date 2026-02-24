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
public:
    //properties / attributes
    string name;
    string dept;
    double salary;

    //methods / functions
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Hasib";
    t1.dept = "CSE";
    t1.salary = 50000;

    cout << "Name: " << t1.name << endl;
    
return 0;
}