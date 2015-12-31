#include <stdio.h>
#include <string.h>
#include "cstd3__struct.h"

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
