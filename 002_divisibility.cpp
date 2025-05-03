#include<stdio.h>
#include<stdlib.h>

int main(){
    int size,r,z=0,i;
    scanf("%d",&size);
	int *arr = (int *)malloc(size*sizeof(int));
	int *arr2 = (int *)malloc(size*sizeof(int));
    arr2[0] = 0;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[i-1]%10==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}