#include <stdio.h>
int main()
{
      int a, b, c, d, e;
      printf("entar tha valu a");
      scanf("\n %d", &a);
      printf("entar tha valu b");
      scanf("\n %d", &b);
      printf("entar tha valu c");
      scanf("\n %d", &c);
      printf("entar tha valu d");
      scanf("\n %d", &d);
      printf("entar tha valu e");
      scanf("\n %d", &e);

      if (a > b)
      {
            if (a > c)
            { 
                  if (a > d)
                  { 
                        if (a > e)
                        { 
                              printf("\n a is maxm");
                        }
                        else
                        {
                              printf("\n e is maxm");
                        }
                  }
                  else
                  {
                        if (d > e)
                        {
                              printf("\n d is max");
                        }
                        else
                        {
                              printf("\n e is max");
                        }
                  }
            }
            else
            {
                  if (c > d)
                  {
                        if (c > e)
                        {
                              printf("\n c is max");
                        }
                        else
                        {
                              printf("\n e is max ");
                        }
                  }
                  else
                  {
                        if (d > e)
                        {
                              printf("\n d is max");
                        }
                        else
                        {
                              printf("\n e is max");
                        }
                  }
            }
      }
      else
      {
            if (b > c)
            {
                  if (b > d)
                  { 
                        if (b > e)
                        { 
                              printf("\n b is max  ");
                        }
                        else
                        {
                              printf("\n e is max");
                        }
                  }
                  else
                  {
                        if (d > e)
                        {
                              printf("\n d is max");
                        }
                        else
                        {
                              printf("\n e is max");
                        }
                  }
            }
            else
            {
                  if (c > d)
                  {
                        if (c > e)
                        {
                              printf("\n c is max");
                        }
                        else
                        {
                              printf("\n e is max ");
                        }
                  }
                  else
                  {
                        if (d > e)
                        {
                              printf("\n d is max");
                             
                        }
                        else
                        {
                              printf("\n e is max ");

                              
                        }
                  }
            }
      }
      return 0;
}