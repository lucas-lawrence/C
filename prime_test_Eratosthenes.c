#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,p;

    printf("Insert a positive integer to test the primality\n");
    scanf("%d",&p);

    if (p<=0)
        printf("You have typed a non positive integer!");
    if (p==1)
        printf("1 is not a prime number");
    else if (p==2 || (p<8 && p%2==1))
        printf("%d is a prime number",p);
    else if (p%2==0)
        printf("%d is not a prime number",p);
    else
        for (a=3;a<=sqrt(p);a+=2)
        {
            b=p%a;
            if (b>0)
            {
                if (a==floor(sqrt(p)) || a==floor(sqrt(p))-1)
                    printf("%d is a prime number",p);
            }
            else
                {printf("%d is not a prime number",p);a=p;}
        }

    return 0;
}
