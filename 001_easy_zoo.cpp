#include<stdio.h>

int main(){
    int x=0,y=0;
    char zoo[20];
    for(int i=0;i<20;i++){
        scanf("%c",&zoo[i]);
        if(zoo[i]=='z'){
            x++;
        }
        else if(zoo[i]=='o'){
            y++;
        }
        if(zoo[i] =='\n'){
            break;
        }
    }
    if((2*x)==y){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}