#include<stdio.h>
int main(){
    int i,j,table;
    scanf("%d",&table);
    for(i=1;i<=table;i++){
        for(j=1;j<=table;j++)
        printf("%3d",i*j);
        printf("\n");
    }
}