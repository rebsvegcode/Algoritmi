//ri-ordina un vettore

#include <stdio.h>
#include <stdlib.h>
#define dim 6

void SelectionSort(int a[],int n){
    int i,j,min_index,temp;
    for(i=0;i<n-1;i++){
        min_index=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
            temp=a[min_index];
            a[min_index]=a[i];
            a[i]=temp;
        }
    }
}

int main(void){
    int v[dim]={6,1,4,2,9,5};
    int c;
    SelectionSort(v,dim);
    printf("Stampa del vettore ordinato: \n");
    for(c=0;c<dim;c++){
        printf("%d ",v[c]);
    }
    printf("\n");
}
