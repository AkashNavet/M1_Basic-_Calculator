#include <stdio.h>
#include <math.h>
char armstrong(int n)
{
    int num =n;
    int power=0;
    while(num>0){
        num=num/10;
        power++;
    }
    num = n;
    int arm=0;
    while(num>0){
        int d = num%10;
        num=num/10;
        arm = arm+pow(d, power);
    }
    if(arm == n){
        printf("No is armstrong");
    }
    else{
        printf("No is not armstrong");
    }
}