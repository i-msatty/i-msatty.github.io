#include <stdio.h>
#include <stdlib.h>
int main()
{
    int temp;
    int num, i,arr[5];
    scanf("%d", &num);
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }


    /* Write the logic to reverse the array. */
     for(int i = 0; i<num/2; i++)
     {
        temp = arr[i];
        arr[i] = arr[num-i-1];
        arr[num-i-1] = temp;
    }
    printf("Reversed values are\n");
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
