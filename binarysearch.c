//cerca elemento in array ORDINATO suddividendo sempre a metà e restituisce indice Θ(nlog(n))

#include <stdio.h>
#include <stdlib.h>
#define dim 10

int BinarySearch(int a[],int l,int r,int val){
    if(l>r){
        return -1;
    }else{
        int mid=(l+r)/2;
        if(a[mid]==val){
            return mid;
        }else{
            if(a[mid]>val){
                return BinarySearch(a,l,mid-1,val);
            }else{
                return BinarySearch(a,mid+1,r,val);
            }
        }
    }
}

int main(void){
    int v[dim]={1,12,23,35,42,53,64,72,87,98};
    int n=62;
    int ris=BinarySearch(v,0,dim-1,n);
    if(ris==-1){
        printf("Il numero non è presente nel vettore.\n");
    }else{
        printf("Il numero si trova in posizione %d.\n",ris);
    }
}

