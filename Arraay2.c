#include <stdio.h>
int main()
{
    int i, j;
    char ch[2][3];
    printf("Enter your name: ");
    scanf("%s",&ch[0][0]);
    printf("Enter your surname: ");
    scanf("%s",&ch[0][1]);
    printf("Enter your nickname: ");
    scanf("%s",&ch[0][2]);
    printf("Enter your birthdate(): ");
    scanf("%s",&ch[1][0]);
    printf("Enter your age: ");
    scanf("%s",&ch[1][1]);

    printf("%c",ch[0][0]);
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=4;j++)
        {
            printf("%s ",ch[i][j]);
        }
    }
    return 0;
}
