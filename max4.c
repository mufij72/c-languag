#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("entar tha valu a");
    scanf("\n %d", &a);
    printf("entar tha valu b");
    scanf("\n %d", &b);
    printf("entar tha valu c");
    scanf("\n %d", &c);
    printf("entar tha valu d");
    scanf("\n %d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("\n a is maxi ");
            }
            else
            {
                printf("\n d is maxi ");
            }
        }
        else
        {
            if (c > d)
            {
                printf("\n c is maxi");
            }
            else
            {
                printf("\n d is maxi");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("\n b is maxi ");
            }
            else
            {
                printf("\n d is maxi ");
            }
        }
        else
        {
            if (c > d)
            {
                printf("\n c is maxi");
            }
            else
            {
                printf("\n d is maxi");
            }
        }
    }

    return 0;
}