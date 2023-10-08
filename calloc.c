#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,n;
    printf("Enter the number of floats: ");
    scanf("%d", &n);

    float *ary_ptr = (float *) calloc(n,sizeof(float));

    if(ary_ptr == NULL)
    {
        printf("Memory not allocated.");
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("Enter ary[%d]: ", i);
        scanf("%f", ary_ptr +i);
    }

    for(i=0;i<n;i++)
    {
        printf("element at %p is %f\n", ary_ptr +i,*(ary_ptr+i));
    }

    free(ary_ptr);
}