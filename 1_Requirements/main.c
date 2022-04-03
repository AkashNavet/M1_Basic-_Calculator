# include <add.c>
# include <armstrong.c>
# include <sub.c>
# include <multi.c>
# include <div.c>
# include <stdio.h>
int main ()
{
    int n,a,b,i;
    while (i>0)
    {
    printf(" 1 for add \n 2 for subtract \n 3 for multiplication \n 4 for division \n 5 for armstrong no");
    scanf("%d",&n);
    if (n==1)
    {
        printf("Enter 2 no to be Added");
        scanf("%d%d",&a,&b);
        n=add(a,b);
        printf("Sum is %d",n);
    }
    else if (n==2)
    {
        printf("Enter 2 no to be Subtracted");
        scanf("%d%d",&a,&b);
        n=sub(a,b);
        printf("Subtraction is %d",n);
    }
    else if (n==3)
    {
        printf("Enter 2 no to be Multiply");
        scanf("%d%d",&a,&b);
        n=multi(a,b);
        printf("Multiplied answer is %d",n);
    }
    else if (n==4)
    {
        printf("Enter 2 no to be divided");
        scanf("%d%d",&a,&b);
        n=div(a,b);
        int r = a%b;
        printf("Division is %d \n Remainder is %d",n,r);
    }
    else if (n==5)
    {
        printf("Enter no to check whether it is armstrong no or not");
        scanf("%d",&a);
        char p =armstrong(a);
    }
    else
    {
        printf("Enter Correct no");
    }
    i++;
    }