#include<stdio.h>
int main()
{
    int t1,t2,t3;
    int i = 0;
    t1 = 0;
    t2  = 1;
    while(i<10)
    {
        printf("%d\n",t1);
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
        i++;
    }
}