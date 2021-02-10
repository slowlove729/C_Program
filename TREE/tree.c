#include <stdio.h>
#include <stdlib.h>

// tree 자료형 선언 
typedef struct TREE
{
    int number;
    struct TREE *up; //큰 수의 주소를 추가할 변수
    struct TREE *down; //작은 수의 주소를 추가할 변수
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
            printf("같은 수가 이미 있습니다.");
        }
    }
}