#include<stdio.h>

int  main()
{
    int i, n, a[100], large;

    printf("Enter the number of elements:\n") ;
    scanf("%d", &n) ;
 
    printf("Enter the elements\n") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    large=a[0];
    for(i=1;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
printf("Largest of %d elements in an array = %d",n,large);
return 0;
}