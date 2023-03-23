#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getinput(int &n1, int &n2)
{
    cin >> n1;
    cin >> n2;
}
void getinput(float &f1, float &f2)
{
    cin >> f1;
    cin >> f2;
}

// ******************************
// Implement all your functions here
// ******************************

void swapTwoValues(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
void swapTwoValues(float &f1, float &f2)
{
    float temp = f1;
    f1 = f2;
    f2 = temp;
}