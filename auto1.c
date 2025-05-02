#include<stdio.h>

int x=51;

void Demo()
{
    int i=21;
    printf("inside demo value of local i is %d\n",i);
    printf("inside demo value of global x is %d\n",x);
}

void Hello()
{
    int j=11;
    printf("inside hello value of local i is %d\n",j);
    printf("inside hello value of global x is %d\n",x);
    //printf("inside demo value of local i is %d\n",i);
}

int main()
{
    printf("value of global x inside main is:%d\n",x);
    Demo();
    Hello();

    return 0;
}