#include <stdio.h>
#include <stdlib.h>

void swap(int *q,int *p);

void swap(int *q,int *p){
    int w;
    w=*q;
    *q=*p;
    *p=w;
    return;
}
int main(void) {
    int x=5,y=1;
    swap(&x,&y);
    printf("x:%d y:%d \n",x,y);
	return 0;
}
