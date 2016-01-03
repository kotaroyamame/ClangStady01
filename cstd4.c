#include <stdio.h>
#include <string.h>
#include "cstd3__struct.h"

void swap(struct human *q,struct human *p);
void sort(struct human *ar,struct human smp);

void swap(struct human *q,struct human *p){
    struct human tmp;
    tmp=*q;
    *q=*p;
    *p=tmp;
    return;
}

void sort_human(struct human *ar,int smp){
    int i,j;
    
    for(i=smp-1;i>=0;i--){
        for(j=0;j<i;j++){
            if((ar[j].eage)>(ar[j+1].eage)){
                swap(&ar[j],&ar[j+1]);
            }
        }
    }
    for(i=0;i<smp;i++){
        if(i>=smp-1){
            ar[i].next=NULL;
            continue;
        }
        ar[i].next=&(ar[i+1]);
    }

}

void show_human(struct human *head){
    struct human *p;
    for(p = head;p != NULL;p = p->next){
        printf("name:%s eage:%d \n",p->name,p->eage);
        
    }
    printf("end\n");
    return;
}
struct human *search(struct human *head,char *name){
    struct human *p;
    for(p=head;p!=NULL;p=p->next){//&(*p).next
        if(strcmp(name,p->name)==0){
            return p;
        }
    }
    return NULL;
}
int main(void) {
    struct human humans[] = {
        {&humans[1],"ueda",18},
        {&humans[2],"iida",15},
        {&humans[3],"ando",19},
        {&humans[4],"saito",25},
        {&humans[5],"yamada",35},
        {NULL,"aizawa",20},
    };
    struct human *head=humans;//&humans[0]
    show_human(head);
    sort_human(head,6);
    show_human(head);
    return 0; 
}
