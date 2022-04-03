#include <stdio.h>
#include <limits.h>
int sub(int a,int b)
{   
    int subtract = a-b;
    if(subtract < INT_MIN )
    {
        return(-1);
    }
    else
    {
        return(subtract);
    }
}