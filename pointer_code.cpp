#include<iostream>
#include<vector>
using namespace std;

//pass by value
void changeA1(){
    int a = 20;
}

//pass by reference using pointer
// void changeA(int* ptr){
//     *ptr = 20;
// }

//pass by reference using alias
// void change(int &b){
//     b = 20;
// }

int main()
{
    int a = 10;
    // cout << &a <<endl;
    //& = address of
    //* = dereference operator
    // dereference means value at address
    // int* ptr = &a;
    // int** ptr1 = &ptr;

    // cout << ptr << endl;
    // cout << &a << endl;
    // cout << &ptr << endl;
    // cout << ptr1 << endl;
    // cout << **(ptr1) << endl;
    // cout << *(ptr) << endl;
    // cout << *(&a) << endl; 
    // cout << **(&ptr) << endl;

    //Null pointer
    // int** p = NULL;
    // cout << p << endl;

    //pass by reference 
    // changeA(&a);

    // cout << "inside main fnx : " << a << endl; 
    
    // change(a);

    int* p = &a;
    // cout << p << endl;
    p++;
    // cout << p << endl;
    // cout << "inside main fnx : " << a << endl; 

    int* ptr1;
    int* ptr2 = ptr1 + 2;
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << ptr2 - ptr1 << endl;

    return 0;
}