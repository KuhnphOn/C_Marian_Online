#include <stdio.h>
int main(){

    int num, mem, a, j;
    some:
        printf("Enter random number(Between 1-20): ");
        scanf("%d",&num);
    if(num>=1 && num<=20)
    {
        printf("\n -Square & Rectangle- \n\n");
        for(a=num;a>=1;a--)
        {
            for(mem=num;mem>=1;mem--)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("\n -Triangle- \n\n");
        for(a=num;a>=1;a--)
        {
            for(mem=num;mem>=a;mem--)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("\n -Pyramid- \n\n");
        for(a=1;a<=num;a++)
        {
            for(mem=1;mem<=num-a;mem++)
            {
                printf(" ");
            }
            for(j=1;j<=(2*a-1);j++)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("\n -Half diamond- \n\n");
        for(a=num;a>=1;a--)
        {
            for(mem=num;mem>=a;mem--)
            {
                printf("*");
            }
            printf("\n");
        }
        for(a=num;a>=1;a--)
        {
            for(mem=a-1;mem>=1;mem--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n!Please enter number between 1-20! \n\n");
        goto some;
    }

    return 0;

}
