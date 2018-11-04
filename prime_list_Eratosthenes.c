#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,bound,count=0,p;

    printf("List all prime number lesser than ");
    scanf("%d",&bound);

    if (2<bound)
        {printf("2");count+=1;}
    if (3<bound)
        {printf(", 3");count+=1;}
    if (5<bound)
        {printf(", 5");count+=1;}
    if (7<bound)
        {printf(", 7");count+=1;}
    for (p=9;p<bound;p+=2)
    {
        for (a=3;a<=sqrt(p);a+=2)
        {
            b=p%a;
            if (b>0)
            {   if (a==floor(sqrt(p)) || a==floor(sqrt(p))-1)
                    {printf(", %d",p);count+=1;}
            }
            else
                a=p;
        }
    }

    printf("\nThe number of primes lesser than %d is %d\n",bound,count);

    return 0;
}
