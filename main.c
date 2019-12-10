#include <stdio.h>
int a[10];
void chap()
{
    int i;
    for (i=1;i<=9;i++)
    {
        if (a[i]==1)
            printf("X");
        if (a[i]==-1)
            printf("O");
        if (a[i]==0)
            printf(" ");
        if ((i % 3) ==0)
            printf("\n");
        else
            printf("|");
    }
}
int check()
{
    if ( (a[1] == a[2]) && ( a[2]==a[3]) && (a[1]!=0) )
        return 1;
    if ( (a[4]==a[5]) && ( a[5]==a[6]) && (a[4]!=0) )
        return 1;
    if ( (a[7]==a[8]) && ( a[8]==a[9]) && (a[7]!=0) )
        return 1;
    if ( (a[1]==a[4]) && ( a[4]==a[7]) && (a[1]!=0) )
        return 1;
    if ( (a[2]==a[5]) && ( a[5]==a[8]) && (a[2]!=0) )
        return 1;
    if ( (a[3]==a[6]) && ( a[6]==a[9]) && (a[3]!=0) )
        return 1;
    if ( (a[1]==a[5]) && ( a[5]==a[9]) && (a[1]!=0) )
        return 1;
    if ( (a[3]==a[5]) && ( a[5]==a[7]) && (a[3]!=0) )
        return 1;
    return 0;
}
int main()
{
    int o,x,f = 0;
    while (f==0)
    {
        printf("player X:\n");
        scanf("%d",&x);
        a[x] = 1;
        chap();
        if (check()==1)
        {
            printf("\n X Is The Winner");
            break;
        }
       printf("player O:\n");
       scanf("%d",&o);
       a[o] = -1;
       chap();
       if (check()==1)
       {
           f=1;
           printf("O Is The Winner");
       }

   }
}