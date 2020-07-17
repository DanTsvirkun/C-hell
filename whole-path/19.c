#include <stdio.h>

int rotate_left();
int rotate_right();
int rotate_180();
int flip_vertical();
int flip_horizontal();
int quit();

int s[3][3] = {1, 2, 3,
               4, 5, 6,
               7, 8, 9};

int main(void)
{   
    printf("1 2 3\n");
    printf("4 5 6\n");
    printf("7 8 9\n\n");
    printf("Enter the operation of your choise:\n");
    printf("A. Rotate  left    B. Rotate right\n");
    printf("C. Rotate 180      D. Flip vertical\n");
    printf("E. Flip horizontal Q. Quit\n");
    char a;
    scanf("%c", &a);
    while (a != 'q')
    {
        if (a == 'a' || a == 'b' || a == 'c' || a == 'd' || a == 'e')
        {
            switch (a)
            {
            case 'a':
                rotate_left();
                break;
            case 'b':
                rotate_right();
                break;
            case 'c':
                rotate_180();
                break;
            case 'd':
                flip_vertical();
                break;
            case 'e':
                flip_horizontal();
                break;
            }
        }
        scanf("%c", &a);
    }

    return 0;
}

int flip_vertical()
{
    int t_arr[3][3] = {1, 2, 3,
                       4, 5, 6,
                       7, 8, 9};
   int t;
    for (int i = 0; i < 3; ++i)
    {
        t = t_arr[0][i];
        t_arr[0][i] = t_arr[2][i];
        t_arr[2][i] = t;
    }
    printf("\n%d %d %d\n%d %d %d\n%d %d %d\n\n", t_arr[0][0], t_arr[0][1], t_arr[0][2], t_arr[1][0], t_arr[1][1], t_arr[1][2], t_arr[2][0], t_arr[2][1], t_arr[2][2]);
}

int flip_horizontal()
{
    int t_arr[3][3] = {1, 2, 3,
                       4, 5, 6,
                       7, 8, 9};
    int t;
    for (int i = 0; i < 3; ++i)
    {
        t = t_arr[i][0];
        t_arr[i][0] = t_arr[i][2];
        t_arr[i][2] = t;
    }
    printf("\n%d %d %d\n%d %d %d\n%d %d %d\n\n", t_arr[0][0], t_arr[0][1], t_arr[0][2], t_arr[1][0], t_arr[1][1], t_arr[1][2], t_arr[2][0], t_arr[2][1], t_arr[2][2]);
}

int rotate_left()
{
    int t_arr[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            t_arr[2 - j][i] = s[i][j];
        }
    }

    printf("\n%d %d %d\n%d %d %d\n%d %d %d\n\n", t_arr[0][0], t_arr[0][1], t_arr[0][2], t_arr[1][0], t_arr[1][1], t_arr[1][2], t_arr[2][0], t_arr[2][1], t_arr[2][2]);
}

int rotate_right()
{
    int t_arr[3][3]; //rotate left
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            t_arr[2 - j][i] = s[i][j];
        }
    }

    int h = 0; // flip horizontal
    for (int i = 0; i < 3; ++i)
    {
        h = t_arr[i][0];
        t_arr[i][0] = t_arr[i][2];
        t_arr[i][2] = h;
    }

    int t[3]; // flip vertical
    for (int i = 0; i < 3; i++)
    {
        t[i] = t_arr[0][i];
    }
    for (int i = 0; i < 3; i++)
    {
        t_arr[0][i] = t_arr[2][i];
    }
    for (int i = 0; i < 3; i++)
    {
        t_arr[2][i] = t[i];
    }
    printf("\n%d %d %d\n%d %d %d\n%d %d %d\n\n", t_arr[0][0], t_arr[0][1], t_arr[0][2], t_arr[1][0], t_arr[1][1], t_arr[1][2], t_arr[2][0], t_arr[2][1], t_arr[2][2]);
}

int rotate_180()
{
    int t_arr[3][3] = {1, 2, 3,
                       4, 5, 6,
                       7, 8, 9};
    int h = 0; // flip horizontal
    for (int i = 0; i < 3; ++i)
    {
        h = t_arr[i][0];
        t_arr[i][0] = t_arr[i][2];
        t_arr[i][2] = h;
    }

    int t[3]; // flip vertical
    for (int i = 0; i < 3; i++)
    {
        t[i] = t_arr[0][i];
    }
    for (int i = 0; i < 3; i++)
    {
        t_arr[0][i] = t_arr[2][i];
    }
    for (int i = 0; i < 3; i++)
    {
        t_arr[2][i] = t[i];
    }
    printf("\n%d %d %d\n%d %d %d\n%d %d %d\n\n", t_arr[0][0], t_arr[0][1], t_arr[0][2], t_arr[1][0], t_arr[1][1], t_arr[1][2], t_arr[2][0], t_arr[2][1], t_arr[2][2]);
}