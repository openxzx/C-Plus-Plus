#include <iostream>
#include <malloc.h>

using namespace std;

int main(void)
{
        int *p1, *p2, *p3, *p4;
        int val = 100;

        p1 = &val;
        p2 = p1;
        cout << "Address of p1: " << p1 << endl;
        cout << "Value of p1: " << *p1 << endl;
        cout << "Address of p2: " << p2 << endl;
        cout << "Value of p2: " << *p2 << endl;

        p3 = new int;
        *p3 = 200;
        cout << "Address of p3: " << p3 << endl;
        cout << "Value of p3: " << *p3 << endl;

        p4 = (int *)malloc(sizeof(int));
        *p4 = 300;
        cout << "Address of p4: " << p4 << endl;
        cout << "Value of p4: " << *p4 << endl;

        delete p3;
        p3 = NULL;

        free(p4);
        p4 = NULL;

        return 0;
}
