#include<stdio.h>
int main(){
    int arr[3][3] = {{12,34,56},{72,4,6},{90,67,12}};
    int maxi,maxj;
    int max = arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }
    printf("%d is max. Its index is %dx%d",max,maxi,maxj);
}