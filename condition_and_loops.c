#include<stdio.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    if(a>=1 || b<=9)
    {
        for(int i=a;i<b+1;i++)
        {   
            if(i==1)
             printf("one\n");
            else if(i==2)
             printf("two\n");
            else if(i==3)
             printf("three\n");
            else if(i==4)
             printf("four\n");
            else if(i==5)
             printf("five\n");
            else if(i==6)
             printf("six\n");
            else if(i==7)
             printf("seven\n");
            else if(i==8)
             printf("eight\n");
            else if(i==9)
             printf("nine\n");
        }
    }
    if(b>9)
    {
        for(int j=10;j<b+1;j++)
        {
            if(j%2==0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }
    return 0;
}

