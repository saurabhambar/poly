include<stdio.h>

struct poly
{
    int a[2];
}

void main()
{
    struct poly poly1,poly2;
    printf("Enter first polynomial: ");
    for(int i=0;i<2;i++)
    {
        int z;
        scanf("%d",&z);
        poly1.a[i] = z;
    }
    printf("Enter second polynomial: ");
    for(int i=0;i<2;i++)
    {
        int z;
        scanf("%d",&z);
        poly2.a[i] = z;
    }
    int p2,p1,p0;
    p2 = poly1.a[0]*poly2.a[0];
    p1 = poly1.a[0]*poly2.a[1]+poly1.a[1]*poly2.a[0];
    p0 = poly1.a[1]*poly2.a[1];
    printf("The product is %d x^2 + %d x + %d \n",p2,p1,p0);
}
