//ответ на второй вопрос находится под кодом

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nameval Nameval;

struct Nameval
{
    char *name;
    int value;
};

struct NVtab
{
    int nval;
    int max;
    Nameval *nameval;
} nvtab;

enum
{
    NVINIT = 1,
    NVGROW = 2
};

struct NVtab addname(Nameval newname, int l_nval, int l_max, Nameval *l_nameval)
{
    struct NVtab LI;
    Nameval *nvp;
    LI.nval = l_nval;
    LI.max = l_max;
    LI.nameval = l_nameval;

    if (LI.nameval == NULL)
    {
        LI.nameval = (Nameval *)malloc(NVINIT * sizeof(Nameval));
        if (LI.nameval == NULL)
            exit(EXIT_FAILURE);
        LI.max = NVINIT;
        LI.nval = 0;
    }
    else if (LI.nval >= LI.max)
    {
        nvp = (Nameval *)realloc(LI.nameval, (NVGROW * LI.max) * sizeof(Nameval));
        if (nvp == NULL)
        {
            exit(EXIT_FAILURE);
        }
        LI.max *= NVGROW;
        LI.nameval = nvp;
    }
    LI.nameval[LI.nval] = newname;
    LI.nval++;
    return LI;
}

struct NVtab delname(char *name, int l_nval, int l_max, Nameval *l_nameval)
{
    struct NVtab LII;
    LII.nval = l_nval;
    LII.max = l_max;
    LII.nameval = l_nameval;

    for (int i = 0; i < LII.nval; i++)
        if (strcmp(LII.nameval[i].name, name) == 0)
        {
            memmove(LII.nameval + i, LII.nameval + i + 1, (LII.nval - (i + 1)) * sizeof(Nameval));
            LII.nval--;
            return LII;
        }
    return LII;
}

int main(void)
{
    nvtab = addname((struct Nameval){.name = "Andy", .value = 12}, nvtab.nval, nvtab.max, nvtab.nameval);

    nvtab = addname((struct Nameval){.name = "Billy", .value = 18}, nvtab.nval, nvtab.max, nvtab.nameval);

    nvtab = delname("Billy", nvtab.nval, nvtab.max, nvtab.nameval);

    for (int i = 0; i < nvtab.nval; i++)
    {
        printf("%s %d\n", nvtab.nameval[i].name, nvtab.nameval[i].value);
    }
    return 0;
}

// Вызывать функцию realloc не нужно, так как по необходимости массив и так будет увеличиваться в два раза.