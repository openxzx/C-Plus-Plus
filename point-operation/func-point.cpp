#include <iostream>

using namespace std;

typedef int (* fun_max_point)(const int *, const int);

int find_max(const int *pint, const int count)
{
        int i;
        int max = pint[0];

        for (i = 0; i < count; i++) {
                if (max < pint[i])
                        max = pint[i];
        }

        return max;
}

int max(const int *pint, const int count, fun_max_point fp)
{
        return fp(pint, count);
}

int main(int argc, char **argv)
{
        fun_max_point fp = find_max;

        int num[] = {1, 2, 3, 4, 5, 6};
        int count = sizeof(num) / sizeof(int);

        cout << "Max value: " << max(num, count, fp) << endl;

        return 0;
}
