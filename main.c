#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n1,n2,sum,sub;

for(int i =1;i<=5;i++)
{

    printf("enter frist number\n");
    scanf("%i",&n1);
    printf("enter second number\n");
    scanf("%i",&n2);
    printf("enter 1:sum or 2:sub\n");
    scanf("%i",&x);

    if(x==1){

        sum = n1 + n2;
        printf("%i\nthanks\n",sum);
        break;
    }

    else if (x==2){

        sub = n1 - n2;
        printf("%i\nthanks\n",sub);
        break;
    }

    else{

        printf("fcuk you again\n");

    }

}


}
