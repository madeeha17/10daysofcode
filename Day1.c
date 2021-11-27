#include <stdio.h>
#include <math.h>

int main()
{
    int num,n,digit,i = 0;
    int r;

    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter digit to search: ");
    scanf("%d",&digit);

    while(n>0)
    {
        r=n%10;
        if(r==digit)
            i++;
        n/=10;
    }

    printf("Total occurrence of digit is: %d ",i);

    return 0;
}

