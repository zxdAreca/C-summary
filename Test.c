#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    srand((int)time(0));
    int rand_num = rand();
    printf("%d\n",rand_num);
}
