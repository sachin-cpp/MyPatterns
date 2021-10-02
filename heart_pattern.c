#include <stdio.h>
#include <math.h>
 

int main()
{
    int x,y;
 
    for (x = 0; x < 10; x++)
    {
        for (y = 0; y <= 4*10; y++)
        {
            double dist1 = sqrt(pow(x - 10, 2) + pow(y - 10, 2));
            double dist2 = sqrt(pow(x - 10, 2) + pow(y - 3*10, 2));
 
            if (dist1 < 10 + 0.5 || dist2 < 10 + 0.5) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
 
    for ( x = 1; x < 2*10; x++)
    {
        for ( y = 0; y < x; y++) {
            printf(" ");
        }
 
        for ( y = 0; y < 4*10 + 1 - 2*x; y++) {
            printf("*");
        }
 
        printf("\n");
    }
 
    return 0;
}
