#include <iostream>
using namespace std;

// Returns a pointer to an integer
int *getNum1()
{
    int num = 10;
    num+=1;
    return &num;
}

// Returns an integer by value
int getNum2()
{
    int num = 10;
    num+=1;
    return num;
}

// Takes a pointer as parameter and modifies the value
void getNum3(int *ptr)
{
    *ptr += 1;
}

// Returns a pointer to an integer allocated on heap
int *getNum4()
{
    int *ptr = new int;
    *ptr = 10;
    *ptr += 1;
    // Note: This is problematic code as it deletes memory and then returns it
    // In real code, you should not delete memory that you plan to return
    delete ptr;
    ptr = NULL;
    return ptr;
}

int main()
{
    int *ptr1 = getNum1();
    *ptr1 += 1;
    cout << "*ptr1=" << *ptr1 << endl;

    int x = getNum2();
    x += 1;
    cout << "x=" << x << endl;

    int y = 10;
    getNum3(&y);
    y += 1;
    cout << "y=" << y << endl;

    int *ptr2 = nullptr;
    ptr2 = getNum4();
    // Warning: This might cause undefined behavior since ptr2 points to deleted memory
    if (ptr2 != nullptr)
    {
        *ptr2 += 1;
        cout << "*ptr2=" << *ptr2 << endl;
    }
    else
    {
        cout << "ptr2 is NULL" << endl;
    }

    // Clean up allocated memory
    delete ptr1;

    return 0;
}