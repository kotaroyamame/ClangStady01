#include <stdio.h>
#include <string.h>

struct human{
    struct human *next;
    char name[20];
    int eage;
};
void show_human(struct human *head){
    struct human *p;
    for(p = head;p != NULL;p = p->next){
        printf("name:%s eage:%d \n",p->name,p->eage);
        
    }
    return;
}
int main(void) {
    struct human humans[] = {
        {&humans[1],"ueda",18},
        {&humans[2],"iida",25},
        {NULL,"aizawa",20},
    };
//    struct human ueda={NULL,"ueda",18};
//    struct human iida={&ueda,"iida",25};
//    struct human aizawa={&iida,"aizawa",20};
    struct human *head=humans;
    struct human *p;
    show_human(head);
    char name[20];
    printf("name>");
    scanf("%s",name);
          
    for(p=head;p!=NULL;p=p->next){
        if(strcmp(name,p->name)==0)
        printf("name:%s eage:%d \n",p->name,p->eage);
    }
    return 0;
    
}
