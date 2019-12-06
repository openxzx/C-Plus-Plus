/*
 * Sieve of Eratosthenes is an algorithm to find the primes 
 * that is between 2 to N (as defined in main).
 *
 * Time Complexity  : O(N * log N)
 * Space Complexity : O(N)
 */

#include <iostream>

using namespace std;

#define MAX 10000000

int isprime[MAX];

/*
 * This is the function that finds the primes and eliminates 
 * the multiples.
 */
void sieve(int n)
{
        int i;
        int j;

        isprime[0] = 0;
        isprime[1] = 0;

        for (i = 2; i <= n; i++)
                if (isprime[i])
                        for (j = i * 2; j <= n; j += i)
                                isprime[j] = 0;
}

/*
 * This function prints out the primes to STDOUT
 */
void print(int n)
{
        int i;

        for (i = 1; i <= n; i++)
                if (isprime[i] == 1)
                        cout << i << ' ';

        cout << '\n';
}

/*
 * NOTE: This function is important for the 
 * initialization of the array.
 */
void init()
{
        int i;

        for (i = 1; i < MAX; i++)
                isprime[i] = 1;
}

int main(void)
{
        init();
        sieve(100);
        print(100);

        return 1;
}
