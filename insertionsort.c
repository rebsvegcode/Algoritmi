/* ordinare array inserendo i valori dalla parte disordinata a quella ordinata */

#include <stdio.h>
#include <stdlib.h>
#define max 6

void InsertionSort(int a[]){
    int temp,i,j;
    for(i=1;i<max;i++){
        temp=a[i];
        for(j=i-1;j>=0&&a[j]>temp;j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
}

int main(){
    int v[max]={5,4,10,1,6,2};
    int c;

    InsertionSort(v);
    for(c=0;c<max;c++){
        printf("%d ",v[c]);
    }

    return 0;
}
