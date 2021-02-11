#include <stdio.h>
#include <stdlib.h>

typedef struct linked
{
    int num;
    struct linked *next;
}list;

void addlist(list *ls, int num);

int main(void)
{
    list *start = malloc(sizeof(list)); //����Ʈ�� ������
    start->next = NULL;

    printf("���α׷� ����");
    addlist(start, 1);
    printf("OK 1");
    addlist(start, 2);
    printf("OK 2");
    addlist(start, 3);
    printf("OK 3");
    addlist(start, 4);
    printf("OK 4");

    list *curr = malloc(sizeof(list));
    curr = start->next;

    while (curr != NULL)
    {
        printf("%d\n", curr->num);
        curr = curr->next;
    }


    return 0;
}



void addlist(list *ls, int num)
{
    if (ls->next != NULL)
    {
        printf("addlist if");
        addlist(ls->next, num);
    }
    else if (ls->next == NULL)
    {
        printf("addlist else if");
        list *n = malloc(sizeof(list));
        n->num = num;
        ls->next = n;
    }
}