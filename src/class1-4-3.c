#include <stdio.h>

int main()
{
        int sum = 0;//remenber to initialization
        int i;
        for(i = 1;i < 6 ;i++)
        {
                int integer;
                printf("Please input a integer:\n");
                scanf("%d",&integer);
                sum = sum + integer;
        };
        printf("Sum is %d\n",sum);
        return 0;
}
