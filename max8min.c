#include <stdio.h>
#include <stdlib.h>

int i;

int triAbulle(int *T){
    int i,j, c;
    for(i=1; i<5; i++){
        for(j=0; j<5; j++){
            if(T[j + 1] < T[j] ){
                c = T[j];
                T[j] = T[j+1];
                T[j+1] = c;
            }
        }
    }
}

int triSelection(int *T){
    int i,j,c;
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(T[j+1] > T[j]){
                c = T[j];
                T[j] = T[j+1];
                T[j+1] = c;
            }
        }
    }
}


int main(){

    int T[5]={1,5,3,2,4};
    int n = 5;
    //int i;



    int Abul;
    int selc;

    triAbulle(T);
    int sumMin=0;
    for(i=1; i<n; i++){
        sumMin = sumMin + T[i] ;
        

    }
    printf("maximum nomber : %d",sumMin);
    
    int sumMax=0;
    triSelection(T);
    for(i=0; i<=n; i++){
        sumMax = sumMax + T[i] ;
        
    }
    printf("\nminimum nomber : %d",sumMax);



    return 0;
}