#include <stdio.h>
int main()
{
    int y,z;
    float x;
    scanf("%f", &x);
    int a = (int)x;

    if(a == x)
    {
        printf ("%i %i", a, a);
    }
    else if(a != x && a > 0)
    {
        y = a + 1;
        z = a;
        printf("%i %i", y, z);
    }
    else if(a != x && a < 0)
    {
        y = a;
        z = a - 1;
        printf("%i %i", y, z);
    }
    else if (a != x && x > 0 && x < 1)
    {
        y = a + 1;
        z = a;
        printf("%i %i", y, z);
    }
    else if (a != x && x < 0 && x > -1)
    {
        y = a;
        z = a - 1;
        printf("%i %i", y, z);
    }
    return 0;
}
