#include <stdio.h>
#include <stdlib.h>

void swap(int *q,int *p);
void sort(int *ar,int smp);

void swap(int *q,int *p){
    int w;
    w=*q;
    *q=*p;
    *p=w;
    return;
}
void sort(int *ar,int smp){
    int i,j;
    
    for(i=smp-1;i>=0;i--){
        for(j=0;j<i;j++){
            if(ar[j]>ar[j+1]){
                swap(&ar[j],&ar[j+1]);
            }
        }
    }

}
int main(void) {
    int x=5,y=1;
    swap(&x,&y);
    printf("x:%d y:%d \n",x,y);
    
    int ar[]={8,3,2,34,3452,634,54,234,2,54,45,22,1,7};
    for(int i=0;i<sizeof(ar)/sizeof(int);i++){
        printf("a[%d]:%d \n",i,ar[i]);
    }
    sort(ar,sizeof(ar)/sizeof(int));
    for(int i=0;i<sizeof(ar)/sizeof(int);i++){
        printf("a[%d]:%d \n",i,ar[i]);
    }
	return 0;
}
