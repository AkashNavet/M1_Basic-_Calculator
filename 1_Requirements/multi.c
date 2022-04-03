#include <stdio.h>
#include <limits.h>
int multi(int a,int b)
{   
    int multiply = a*b;
    if (multiply > INT_MAX  )
    {
        return(-1);
    }
    else if(multiply < INT_MIN )
    {
        return(-2);
    }
    else
    {
        return(multiply);
    }
}