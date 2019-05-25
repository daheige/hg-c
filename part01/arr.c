#include <stdio.h>

int main()
{
    int i;
    int num = 10;
    int nd[num]; //int类型的数组
    for (i = 0; i < num; i++)
    {
        nd[i] = i;
    }

    for (int j = 0; j < num; j++)
    {
        printf("current val: %d\n", nd[j]);
    }

    return 0;
}