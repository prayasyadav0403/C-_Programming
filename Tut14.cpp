#include <iostream>
using namespace std;

//Functon Prototype
//type function-name (argument); --->> Syntax
//int sum (int a , int b); --->> Acceptable
//int sum (int a , b); --->> Not Acceptable
int sum(int, int); //--->> Acceptable
//void g(void); --->> Acceptable
void g(); //--->> Acceptable

int main()
{
    int num1, num2;
    cout << "Enter The First Number" << endl;
    cin >> num1;
    cout << "Enter The Second Number" << endl;
    cin >> num2;
    //num1 and num2 is actual parameters
    cout << "The sum Of" << sum(num1, num2) << endl;
    g();

    return 0;
}

int sum(int a, int b)
//Formal Parameter a and b will be taking values from actual parameters  num1 and num2
{
    int c = a + b;
    return c;
}
void g()
{
    cout << "\nHello , Good Morning";
}