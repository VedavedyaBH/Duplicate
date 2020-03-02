#include <stdio.h>
#include <stdlib.h>
void duplicate(int n,int a[100]);

int main()
{
    int i,a[20];
    FILE *fc;
    char f[25];
    printf("Enter the file name to read\n");
    scanf("%s",f);
    fc=fopen(f,"r");
    for(i=0;i<100;i++)
        fscanf(fc,"%d",&a[i]);
    fclose(fc);
    int c=0;
    for(i=0;a[i]<'/0';i++)
        c=c+1;
    duplicate(c,a);
    return 0;
}

void duplicate(int v,int a[100])
{
    int i,j;
    for(i=0;i<=v;i++)
    {
        for(j=i+1;j<=v;j++)
        {
           if(a[i]==a[j])
           {
            printf("Duplicate item is\n");
            printf("%d\n",a[i]);
           }

        }
    }

}
