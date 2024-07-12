#include<stdio.h>

main(){

    int row,col;
    
    
     printf("Enter Row Size :");
     scanf("%d",&row);
     printf("Enter Column Size :");
     scanf("%d",&col);
      int a[row][col];
     
     for (int i=0; i< row; i++)
        
     {
        for (int j=0; j< col; j++){
           printf("Array[%d][%d] :",i,j);
           scanf("%d",&a[i][j]);
        }
        
    }

    printf("\n");
     //diagnoal element
   printf("Diagonal Element :\n");
  
   for (int i=0; i< row; i++)
        
     {
        for (int j=0; j< col; j++){
            if(i==j){
                 printf("%d ",a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
     //cross element
   printf("Cross Element :\n");
  
   for (int i=0; i< row; i++)
        
     {
        for (int j=0; j< col; j++){
            if(i==j||i+j==row-1){
                 printf("%d ",a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    
}