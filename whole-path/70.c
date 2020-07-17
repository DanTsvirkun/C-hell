#include <stdio.h>
#include <stdlib.h>

typedef struct Nameval Nameval;
struct Nameval
{
    char *name;
    int value;
    Nameval *next;
};

Nameval *newitem(char *name, int value)
{
    Nameval *newp;
    newp = (Nameval *)malloc(sizeof(Nameval));
    newp->name = name;
    newp->value = value;
    newp->next = NULL;
    return newp;
}

Nameval *addfront(Nameval *listp, Nameval *newp)
{
    newp->next = listp;
    return newp;
}

Nameval *addend(Nameval *listp, Nameval *newp)
{
    if (listp == NULL)
        return newp;
    Nameval *p;
    for (p = listp; p->next != NULL; p = p->next)
        ;
    p->next = newp;
    return listp;
}

int main()
{
    Nameval *nvlist = NULL;
    nvlist = addfront(nvlist, newitem("data1", 10));
    Nameval *item = newitem("data2", 45);
    nvlist = addend(nvlist, item);
    printf("%s %d\n", nvlist->name, nvlist->value);

    return 0;
}
