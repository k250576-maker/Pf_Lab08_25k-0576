#include<stdio.h>
int main(){
    int arr[2][2], arr1[2][2];
    
    printf("Enter values of first matrix: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter value of %dx%d: \n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

     printf("Enter values of second matrix: \n");
    for(int a=0;a<2;a++){
        for(int b=0;b<2;b++){
            printf("Enter value of %dx%d: \n",a,b);
            scanf("%d",&arr1[a][b]);
        }
    }

     printf("After addition: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%3d",arr[i][j]+arr1[i][j]);
            
        }
        printf("\n");
    }
}