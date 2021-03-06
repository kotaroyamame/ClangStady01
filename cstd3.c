#include <stdio.h>
#include <string.h>
#include "cstd3__struct.h"

void swap(struct human *q,struct human *p){
    struct human tmp;
    tmp=*q;
    *q=*p;
    *p=w;
    return;
}

void sort(struct human *ar,struct human smp){
    int i,j;
    
    for(i=smp-1;i>=0;i--){
        for(j=0;j<i;j++){
            if(ar[j]>ar[j+1]){
                swap(&ar[j],&ar[j+1]);
            }
        }
    }

}

void show_human(struct human *head){
    struct human *p;
    for(p = head;p != NULL;p = p->next){
        printf("name:%s eage:%d \n",p->name,p->eage);
        
    }
    return;
}
struct human *search(struct human *head,char *name){
    struct human *p;
    for(p=head;p!=NULL;p=p->next){
        if(strcmp(name,p->name)==0){
            return p;
        }
    }
    return NULL;
}
int main(void) {
    struct human humans[] = {
        {&humans[1],"ueda",18},
        {&humans[2],"iida",25},
        {NULL,"aizawa",20},
    };
    struct human *head=humans;
    struct human *p;
    show_human(head);
    char name[60];
    printf("name>");
    scanf("%59s",name);    
    if((p=search(head,name))!=NULL)
        printf("name:%s eage:%d \n",p->name,p->eage);
    else
        printf("None\n");
    return 0; 
}
