#include <iostream>

using namespace std;

class complex {
        public:
                float real;
                float image;
        public:
                complex (float r, float i) {
                        real = r;
                        image = i;
                }

                complex () {
                        real = 0;
                        image = 0;
                }

                friend ostream & operator << (ostream &, complex &);
};

ostream & operator << (ostream & out_test, complex & obj)
{
        out_test << obj.real;
        if (obj.image > 0)
                out_test << "+";
        if (obj.image != 0)
                out_test << obj.image << "i";

        return out_test;
}

int main(int agrc, char **argv)
{
        complex c1(1.2, 1.4);
        complex c2(1.1, -1.2);
        complex c3;

        cout << "The value of c1 is: " << c1 << endl;
        cout << "The value of c2 is: " << c2 << endl;
        cout << "The value of c3 is: " << c3 << endl;

        return 0;
}
