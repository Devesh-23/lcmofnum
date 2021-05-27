#include<stdio.h>
int LCM();
int main()
{
    int a,b;
    printf("Enter two no to find LCM: ");
    scanf("%d %d",&a,&b);
    printf("LCM of %d and %d are %d",a,b,LCM(a,b));
}

int LCM(int a, int b)
{
    static int c=1;
    if(c%a==0 && c%b==0)
    return c;
    else
    {
        c++;
        LCM(a,b);
        return c;
    }
}
