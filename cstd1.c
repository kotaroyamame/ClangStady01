#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]) {
    int a,b,c,pw;
    char *u;
    
    if(argc!=2){
        printf("usage : %s <username>\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    u=argv[1];
    a=u[0]+u[2]+u[4];
    b=a*u[1];
    c=b-u[3];
    pw= c/u[5];
    printf("PW: %d \n",pw);
	return 0;
}
