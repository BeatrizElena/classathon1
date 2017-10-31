#include <cs50.h>
#include <math.h>
#include <stdio.h>

// call factorialize function
long long int factorialize();

int main(void)
{
    factorialize();
}

// data type of long long will avoid signed integer overflows up to inputs of 20.
long long int factorialize(void)
{
    int n;
    do
    {
        n = get_int();
    }
    while (n < 0);

    if (n == 0)
    {
        return 1;
    }

    int i;
    long long int nFactor = 1;
    for (i = n; i > 0 ; i--)
    {
        nFactor *= i;
    }
    printf("%lli\n", nFactor);
    return nFactor;
}
