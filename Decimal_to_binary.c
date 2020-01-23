//binary.c


#include <stdio.h>

int power(int base,int expo){
    int i,prod=1;
    for(i=0;i<expo;i++)
        {prod=prod*base;}
    return prod;
}

void main(void){

    int i=0,origN,N,sum=0;
    printf("\n Please give a positive integer : ");
    scanf("%d",&N);
    origN=N;
    while(N>0){
        sum=sum + (N%2)*(power(10,i));
        N=N / 2;
        i++;
    }
    printf("\n the number %d is the number %d in binary.",origN,sum);

  
    }
