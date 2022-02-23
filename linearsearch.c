#include <stdio.h>
#include <stdlib.h>
#define dim 10


int LinearSearch(int a[],int len,int elem){
    int i;
    for(i=0;i<len;i++){
        if(a[i]==elem){
            return i;
        }
    }
    return -1;
}

int main(void){
    int v[dim]={12,1,23,32,45,52,72,83,6,98};
    int n=5;
    int ris=LinearSearch(v,dim,n);
    if(ris==-1){
        printf("L'elemento non è stato trovato.\n");
    }else{
        printf("L'elemento si trova nella posizione %d.\n",ris);
    }
    return 0;
}

