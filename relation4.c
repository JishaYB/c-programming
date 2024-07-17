#include<stdio.h>
int main()
{int  x,y;
printf("enter x\n");
scanf("%d",&x);
printf("enter y\n");
scanf("%d",&y);
int n;
while(1)
{

printf("enter n\n");
scanf("%d",&n);
switch (n)
{
    case 1:
        if(x<y)
        {
            printf("true\n");
        }
        else
        {
            printf("false");
        }
        break;
    case 2:
        if(x>y)
        {
        printf("true\n");
        }
        else{
            printf("false\n");
    }break;
    case 3:
    if(x<=y)
    {
    printf("true\n");
    }
    else{
        printf("false\n");
    }break;
    case 4:
    if((x*x-y)>(y*y-x))
    {
    printf("true\n");
    }
    else{
        printf("false\n");
    }break;
    case 5:
    if((x*x*x)<(y*x*x))
    {
    printf("true\n");
    }
    else{
        printf("false\n");
    }break;
case 6:
    if((x*y)!=(y*x))
    {
    printf("true\n");
    }
    else{
        printf("false\n");
    }break;
case 7:
    if((x*y)==(y*x))
    {
    printf("true\n");
    }
    else{
        printf("false\n");
    }break;
default:
  goto sreelakshmi;
}
}
sreelakshmi:
return 0;
}
