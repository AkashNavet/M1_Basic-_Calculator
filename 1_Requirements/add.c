#include <stdio.h>
#include <limits.h>
int add(int a,int b)
{   
    int sum = a+b;
    if (sum > INT_MAX  )
    {
        return(-1);
    }
    else if(sum < INT_MIN )
    {
        return(-2);
    }
    else
    {
        return(sum);
    }
}