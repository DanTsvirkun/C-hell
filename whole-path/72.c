#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Type_List Type_List;

struct Type_List
{
    void *data;
    Type_List *next;
};

int size(Type_List *list)
{
    Type_List *loc = list;
    int quantity;
    for (; loc != NULL; loc = loc->next)
    {
        quantity++;
    }
    return quantity;
}

Type_List *memory(Type_List *list, void *data)
{
    Type_List *loc;
    loc = malloc(sizeof(list));
    if (loc == NULL)
    {
        printf("No memory has been chosen ");
        exit(EXIT_FAILURE);
    }

    printf("Memory has been chosen. ");
    loc->data = data;
    loc->next = list;
    return loc;
}

Type_List *listpr(Type_List *list, int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        printf("%s\n", list->data);
        list = list->next;
        if (list->next == NULL)
            return list;
    }
    return list;
}

int main(void)
{
    Type_List *some_l = NULL;
    some_l = memory(some_l, "randomdata");
    int g_quantity = size(some_l);
    printf("The size is equal to: %d\n", g_quantity);
    listpr(some_l, g_quantity);
    return 0;
}