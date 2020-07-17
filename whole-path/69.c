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

void listpr(Nameval *nameval, int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        printf("%s %d\n", nameval->name, nameval->value);
        if (nameval->next == NULL)
            return nameval;
        nameval = nameval->next;
    }
}

Nameval *copy(Nameval *subject)
{
    Nameval *listp, *t;
    for (; subject != NULL; subject = subject->next)
        t = newitem(subject->name, subject->value);
    listp = t;
    return listp;
}

Nameval *merge(Nameval *mergeI, Nameval *mergeII)
{
    Nameval *t;
    if (mergeI == NULL)
        return mergeII;
    else if (mergeII == NULL)
        return mergeI;
    for (t = mergeI; t->next != NULL; t = t->next)
    {
        t->next = mergeII;
        return mergeI;
    }
}

Nameval *breakk(Nameval *listp, char *name)
{
    Nameval *t;
    for (t = listp; t != NULL; t = t->next)
    {
        if (strcmp(t->name, name) == 0)
        {
            return t;
        }
    }
    return listp;
}

Nameval *addfront_con(Nameval *listp, Nameval *item, Nameval *newp)
{

    Nameval *t;

    for (t = listp; t != NULL; t = t->next)
    {
        if (t == item)
        {
            t = addfront(item, newp);
            return listp;
        }
    }
    return listp;
}

Nameval *addend_con(Nameval *listp, Nameval *item, Nameval *newp)
{
    Nameval *t;

    for (t = listp; t != NULL; t = t->next)
    {
        if (t == item)
        {
            item->next = addfront(item->next, newp);
            return listp;
        }
    }
    return listp;
}

int main()
{
    int q = 0;
    Nameval *nvlist = NULL;
    Nameval *str_copy;
    nvlist = addfront(nvlist, newitem("data1", 10));
    nvlist = addfront(nvlist, newitem("data2", 20));
    nvlist = addfront(nvlist, newitem("data3", 30));
    Nameval *item = newitem("test", 28);
    nvlist = merge(nvlist, item);
    nvlist = breakk(nvlist, "data1");
    nvlist = addfront_con(nvlist, item, newitem("data5", 50));
    nvlist = addend_con(nvlist, item, newitem("data6", 60));

    Nameval *itemII = newitem("data4", 40);
    nvlist = addend(nvlist, itemII);

    str_copy = copy(nvlist);
    printf("%s %d\n", nvlist->name, nvlist->value);

    coolfun(nvlist, inccounter, &q);
    listpr(nvlist, q);

    return 0;
}
