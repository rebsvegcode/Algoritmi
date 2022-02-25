//riordina il vettore comparando le coppie

#include <stdio.h>
#include <stdlib.h>
#define dim 5

void BubbleSort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main(void){
    int v[dim]={15,16,6,5,7};
    int c;
    BubbleSort(v,dim);
    for(c=0;c<dim;c++){
        printf("%d ",v[c]);
    }
    return 0;
}

