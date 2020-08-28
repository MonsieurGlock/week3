#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j,power;
    float a=0;
    printf("Point : ");
    scanf("%d",&n);
    int table[n][2];
    for(i=0 ; i<n ; i++){
        scanf("%d %d",&table[i][0],&table[i][1]);
    }
    for(j=0 ; j < n ; j++){
        if(j != n-1){
            power = pow(table[j][0]-table[j+1][0],2) + pow(table[j][1]-table[j+1][1],2);
            a = a+sqrt(power);
        }
        else if(j = n-1){
            power = pow(table[j][0]-table[0][0],2) + pow(table[j][1]-table[0][1],2);
            a = a+sqrt(power);
        }
    }
    printf("%.3f",a);

}