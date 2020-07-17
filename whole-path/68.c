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

// coolfun с примера
void coolfun(Nameval *listp, void (*fn)(Nameval *, void *), void *arg)
{
    for (; listp != NULL; listp = listp->next)
    {
        (*fn)(listp, arg);
    }
}

// incounter с примера
void inccounter(Nameval *p, void *arg)
{
    int *ip;
    ip = (int *)arg;
    (*ip)++;
}

int main()
{
    Nameval *nvlist = NULL;
    nvlist = addfront(nvlist, newitem("data1", 10));
    printf("%s %d\n", nvlist->name, nvlist->value);
    nvlist = addfront(nvlist, newitem("data2", 20));
    printf("%s %d\n", nvlist->name, nvlist->value);
    nvlist = addfront(nvlist, newitem("data3", 30));
    printf("%s %d\n", nvlist->name, nvlist->value);

    Nameval *item = newitem("data4", 40);
    nvlist = addend(nvlist, item);
    printf("%s %d\n", item->name, item->value);
    int q = 0;
    coolfun(nvlist, inccounter, &q);
    printf("%d Structures in our list.\n", q);

    return 0;
}
