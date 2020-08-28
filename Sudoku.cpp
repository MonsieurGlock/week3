#include <stdio.h>
int main(){
    int i,j,k,a=0;
    int Table[9][9];
    printf("\n");
    for(i=0 ; i<9 ; ++i){ 
        for(j=0 ; j<9 ; ++j){
            scanf("%d ",&Table[i][j]);
        }
    }
    for(i=0 ; i<9 ; ++i){ 
        for(j=0 ; j<9 ; ++j){
            a = a+Table[i][j];
        }
    }

    for(j=0 ; j<9 ; ++j){ 
        for(i=0 ; i<9 ; ++i){
            a = a+Table[i][j];
        }
    }
    if(a == 810){
        printf("Correct");
    }
    else{
        printf("Incorrect");
    }
    return 0;
}