#include<stdio.h>
int main()
{
    int x,y,z,k;
    printf("enter x\n");
    scanf("%d",&x);
    printf("enter y\n");
    scanf("%d",&y);
    printf("Enter z\n");
    scanf("%d",&z);
    k=x+y*z/4%2-1;
    printf("%d",k);
    return 0;
}
