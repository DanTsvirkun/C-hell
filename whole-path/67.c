#include <stdio.h>
#include <stdlib.h>
int quantity = 0;

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
    quantity++;
    return newp;
}

Nameval *addfront(Nameval *listp, Nameval *newp)
{
    newp->next = listp;
    quantity++;
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
    quantity++;
    return listp;
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

int main()
{
    Nameval *nvlist = NULL;
    nvlist = addfront(nvlist, newitem("data1", 10));
    nvlist = addfront(nvlist, newitem("data2", 20));
    nvlist = addfront(nvlist, newitem("data3", 30));

    Nameval *item = newitem("data4", 40);

    nvlist = addend(nvlist, item);
    nvlist = addend(nvlist, newitem("data5", 50));
    listpr(nvlist, quantity);

    return 0;
}
