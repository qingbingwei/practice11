#include <stdio.h>
#include <limits.h>

#define PI 3.14
int main()
{

    //第一题
    /*int a = 0;
    scanf("%d",&a);
    int tmp = 0;
    while(a)
    {
        tmp = a % 10;
        printf("%d ",tmp);
        a /= 10;
    }*/


    //第二题
    /*int max = 0;
    int min = INT_MAX;
    int a = 0;

    while (scanf("%d",&a) == 1)
    {
        if(a > max)
            max = a;
        if(a < min)
            min = a;
    }

    printf("%d\n",max);
    printf("%d\n",min);*/

    //第三题
    /*int l = 0;
    scanf("%d",&l);
    float ret = 0;
    float s1 = l*l;
    float s2 = PI*l*l/4;

    ret = s1 - s2;

    printf("%.2f",ret);*/

    return 0;
}
