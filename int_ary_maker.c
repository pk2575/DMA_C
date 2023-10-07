#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    int i;
    printf("Enter the number of integers you want:");
    scanf("%u", &number);
    int *ary_ptr = (int *)malloc(number*sizeof(int));

    if (ary_ptr == NULL)
    {
        printf("Memory isn't available");
        exit(1);
    }

    for(i=0;i<number;i++)
    {
        printf("Enter ary[%d]: ", i);
        scanf("%d", ary_ptr+i);
    }

    for(i=0;i<number;i++)
    {
        printf("ary[%d] : %d",i,*(ary_ptr + i));
    }

    free(ary_ptr);
    return 0;
}

