#include<stdio.h>

main(){

      int size;
    
    
     printf("Enter Array Size :");
     scanf("%d",&size);
      int a[size];
     
     for (int i=0; i< size; i++)
        
     {
        printf("Array element %d:",i);
        scanf("%d",&a[i]);
    }
 
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
          if(a[i] + a[j] == 5)
           printf("%d %d",a[i],a[j]);
        }
        printf("\n");
    }

  
}