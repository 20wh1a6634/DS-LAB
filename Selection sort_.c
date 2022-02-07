int main()
{
    int arr[100], n, c1, c2, temp;
    printf("enter the no of elements\n");
    scanf("%d", &n);
    printf("enter the integers \n");
    for(c1 = 0; c1 < n; c1++)
    {
        scanf("%d", &arr[c1]);
    }
    for(c1=0;c1 < n;c1++)
    {
        for(c2 = c1+1; c2 < n; c2++)
        {
           if(arr[c1] > arr[c2])
           {
               temp = arr[c1];
               arr[c1] = arr[c2];
               arr[c2] = temp;
           }
        }
    }
    printf("sorted list in ascending order\n");
    for (c1 = 0; c1 < n; c1++)
    {
        printf("%d\n", arr[c1]);
    }
    return 0;
}
#output
#enter the no of elements
4
#enter the integers 
4
5
8
3
#sorted list in ascending order
3
4
5
8
 #enter the no of elements
5
#enter the integers 
4
5
8
3
2
#sorted list in ascending order
2
3
4
5
8
