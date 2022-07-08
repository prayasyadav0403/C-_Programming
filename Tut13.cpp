#include <iostream>
using namespace std;

//Structure In C++

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum Meal{breakfast,lunch,dinner};
    Meal m1 = lunch;
    cout<<(m1==1)<<endl;
    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    // ep prayas;
    // ep shubham;
    // ep priyani;
    // prayas.eId = 1;
    // prayas.favChar = 'a';
    // prayas.salary = 500000;

    // shubham.eId = 2;
    // shubham.favChar = 'b';
    // shubham.salary = 600000;

    // priyani.eId = 3;
    // priyani.favChar = 'c';
    // priyani.salary = 700000;

    // cout << "The Value is " << prayas.eId << endl;
    // cout << "The Value is " << prayas.favChar << endl;
    // cout << "The Value is " << prayas.salary << endl;

    // cout << "The Value is " << shubham.eId << endl;
    // cout << "The Value is " << shubham.favChar << endl;
    // cout << "The Value is " << shubham.salary << endl;

    // cout << "The Value is " << priyani.eId << endl;
    // cout << "The Value is " << priyani.favChar << endl;
    // cout << "The Value is " << priyani.salary << endl;

    // union money m1;
    // union money m2;
    // union money m3;

    // m1.rice = 34;
    // m2.car = 'c';
    // m3.pounds = 12.44;

    // cout<<m1.rice<<endl;
    // cout<<m2.car<<endl;
    // cout<<m3.pounds<<endl;

    return 0;
}
