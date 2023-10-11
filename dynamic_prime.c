#include <stdio.h>
#include <stdlib.h>


int is_prime(int*);
int main()
{
    int size,prime_count=0;

    printf("Enter the number of elements:");
    scanf("%d", &size);

    int *num_ary = (int*)calloc(size, sizeof(int));

    for(int i=0; i<size;i++)
    {
        printf("Enter ary[%d] : ",i);
        scanf("%d", num_ary + i);
    }

    for(int i =0; i<size;i++)
    {
        printf("ary[%d] : %d \n", i, *(num_ary + i));
        if(is_prime(num_ary+i))
        {
            prime_count++;
        }
    }
    free(num_ary);
    printf("The number of primes is : %d", prime_count);
 
}

int is_prime(int *num)
{
    int  n = *num;
    if(n<=1)
    {
        return 0;
        
    }

    else if (n == 2 || n == 3)
    {
        return 1;
    }

    else
    {
        for(int i=2; i<n/2;i++)
        {
            if(n%i ==0)
            {
                return 0;
            }
        }
        return 1;
    }
}