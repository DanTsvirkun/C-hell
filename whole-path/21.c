#include <stdio.h>
#define MAX_NRINGS 64
    int st[4][MAX_NRINGS];
int nr[4];
int nmoves;
void print_st()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("\n| ");
        for (int j = 0; j < nr[i]; j++)
        {
            printf("%d ", st[i][j]);
        }
    }
    printf("\n");
}
void init(int nrings)
{
    for (nr[1] = 0; nrings > 0; nr[1]++, nrings--)
    {
        st[1][nr[1]] = nrings;
    }
    nr[2] = nr[3] = 0;
    nmoves = 0;
    print_st();
}
void move1(int n1, int n2)
{
    st[n2][nr[n2]++] = st[n1][--nr[n1]];
    print_st();
    nmoves++;
}
void hanoi(int nrings, int i1, int i2, int i3)
{
    if (nrings == 1)
    {
        move1(i1, i3);
    }
    else
    {
        hanoi(nrings - 1, i1, i3, i2);
        move1(i1, i3);
        hanoi(nrings - 1, i2, i1, i3);
    }
}
int main()
{
    int nrings;
    printf("Rings number: ");
    scanf("%d", &nrings);
    hanoi(nrings, 1, 2, 3);
}