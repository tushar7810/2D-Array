#include<stdio.h>
int main(){
    int r,c; // here r means row and c means column
    printf("Enter row and column numbers : ");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],p[r][c];
    printf("Enter the first matrix\n");
    for(int i =0 ; i < r ; i++){
        for(int j = 0 ; i < c ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; i < c ; j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("print the first matrix\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; i< c ; j++){
           printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("print the second matrix\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; i < c ; j++){
           printf("%d\t" , b[i][j]);
        }
        printf("\n");
    }
    printf("The addition of the two matrices is : \n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            p[i][j] = a[i][j] + b[i][j];
            printf("%d\t" , p[i][j]);
        }
        printf("\n");
    }
  return 0;
}
