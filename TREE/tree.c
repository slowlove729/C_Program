#include <stdio.h>
#include <stdlib.h>

// tree �ڷ��� ���� 
typedef struct TREE
{
    int number;
    struct TREE *up; //ū ���� �ּҸ� �߰��� ����
    struct TREE *down; //���� ���� �ּҸ� �߰��� ����
}tree;

addNumber(tree *list, int num);


int main(void)
{
    tree *start;

    addNumber(start, 1);

}



addNumber(tree *list, int num)
{
    if (list->number == NULL)
    {
        list->number = num;
    }
    else
    {
        if (list->number > num)
        {
            tree *n = malloc(sizeof(tree));
            list->down = num;
        }
        else if (list->number < num)
        {
            tree *n = malloc(sizeof(tree));
            list->up = num;
        }
        else 
        {
            printf("���� ���� �̹� �ֽ��ϴ�.");
        }
    }
}