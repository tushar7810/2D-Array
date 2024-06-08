#include<stdio.h>
int main(){
  int r,c;
  printf("Enter the row and column of the array : \n");
  scanf(" %d %d ", &r , &c );
  int arr[r][c];
    printf("Enter the matrix : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Print the input matrix : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of an array : \n");
    int b[c][r];
    for(int j=0;j<c;j++){
        for(int k=0;k<r;k++){
            b[j][k]=arr[k][j];
            printf("%d\t",b[j][k]);
        }
        printf("\n");
    }
    
  return 0;
}

/* 
  After successfully ompile the program file input this matrix as shown in the following : 
  
 > Enter the matrix : 
  3  5  8
  4  9  1
  2  7  6
*/
