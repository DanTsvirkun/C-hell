#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Nameval Nameval;
struct Nameval
{
    char *name;
    int value;
    Nameval *next;
};

/*newitem*/
Nameval *newitem(char *name, int value)
{
    Nameval *newp;
    newp = (Nameval *)malloc(sizeof(Nameval));
    newp->name = name;
    newp->value = value;
    newp->next = NULL;
    return newp;
}

/*addfront*/
Nameval *addfront(Nameval *listp, Nameval *newp)
{
    newp->next = listp;
    return newp;
}

/*addend*/
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

Nameval *delitem(Nameval *listp, char *name)
{
    Nameval *p, *prev;
    prev = NULL;
    for (p = listp; p != NULL; p = p->next)
    {
        if (strcmp(name, p->name) == 0)
        {

            if (prev == NULL)
            {
                listp = p->next;
            }
            else
                prev->next = p->next;
            p->name = NULL;
            free(p->name);
            free(p);
            return listp;
        }
        prev = p;
    }
    printf("delitem: %s not in list", name);
    return NULL;
}

void freeall(Nameval *listp)
{
    Nameval *next;
    for (; listp != NULL; listp = next)
    {
        next = listp->next;
        listp->name = NULL;
        free(listp);
        free(listp->name);
    }
}

listpr(Nameval *nameval, int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        printf("%s %d\n", nameval->name, nameval->value);
        if (nameval->next == NULL)
            return nameval;
        nameval = nameval->next;
    }
}

int main(void)
{
    Nameval *nvlist = NULL;

    nvlist = addfront(nvlist, newitem("data1", 10));
    Nameval *item = newitem("data2", 45);
    nvlist = addend(nvlist, item);
    nvlist = delitem(nvlist, "data2");
    listpr(nvlist, 1);
    freeall(nvlist);
    return 0;
}