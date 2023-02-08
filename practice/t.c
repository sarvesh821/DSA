// #include <stdio.h>
// int main()
// {
//     char path[6] = {'E', 'S', 'E', 'N', 'N', 'W'};
//     int x = 0;
//     int y = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         if (path[i] == 'N')
//         {
//             y++;
//         }
//         if (path[i] == 'S')
//         {
//             y--;
//         }
//         if (path[i] == 'W')
//         {
//             x--;
//         }
//         if (path[i] == 'E')
//         {
//             x++;
//         }
//     }
//     printf("%d%d\n", x, y);
//     while (x < 0)
//     {
//         printf("W");
//         x++;
//     }
//     while (x > 0)
//     {
//         printf("E");
//         x--;
//     }
//     while (y < 0)
//     {
//         printf("S");
//         y++;
//     }
//     while (y > 0)
//     {
//         printf("N");
//         y--;
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == 0 && arr[j] == 1)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
        else if (arr[j] == 0)
        {
            j--;
        }
        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}