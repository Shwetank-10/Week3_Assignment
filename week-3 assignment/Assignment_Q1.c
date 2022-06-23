#include <stdio.h>
#include <conio.h>
int gcd(int x, int y);
void main()
{
    int x, y;
    printf("enter two positive integers:");
    scanf("%d %d", &x, &y);
    printf("G.C.D of %d and %d is %d.", x, y, gcd(x, y));
    }
    int gcd(int x, int y)
    {
        if (y != 0)
        return gcd(y, x % y);
        else
        return x;
    }
