#include<stdio.h>
int main(void)
{
    int a[3];
    int i,j;
    int count=0;
    printf("Enter the value of an elements: \n");
    for(i=0;i<3;i++)
    {
        printf("Elements[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Count element is %d\n",count);
    return 0;
}
