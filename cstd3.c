#include <stdio.h>

struct human{
    struct human *next;
    char name[20];
    int eage;
};
int main(void) {
    struct human ueda={NULL,"ueda",18};
    struct human iida={&ueda,"iida",25};
    struct human aizawa={&iida,"aizawa",20};
    
    struct human *head=&aizawa;
    struct human *p;
    for(p = head;p != NULL;p = p->next){
        printf("name:%s eage:%d \n",p->name,p->eage);
        
    }
    return 0;
    
}
