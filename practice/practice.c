// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d%d", &n, &m);
//     int arr[n][n];
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int row = 0;
//     int col = m;
//     while (col >= 0)
//     {
//         printf("%d ", arr[row][col]);
//         row++;
//         col--;
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int num = n;
//     int count = 0;
//     while (num > 0)
//     {
//         int temp = num % 10;
//         count = count + 1;
//         num = num / 10;
//     }
//     int sum = 0;
//     int i = 0;
//     if (count % 2 == 0)
//     {
//         sum = 0;
//         i = 0;
//         while (n > 0)
//         {
//             int last = n % 10;
//             if (i % 2 == 0)
//             {
//                 sum -= last;
//             }
//             else
//             {
//                 sum += last;
//             }
//             i++;
//             n = n / 10;
//         }
//     }
//     else
//     {

//         while (n > 0)
//         {
//             int last = n % 10;
//             if (i % 2 == 0)
//             {
//                 sum += last;
//             }
//             else
//             {
//                 sum -= last;
//             }
//             i++;
//             n = n / 10;
//         }
//     }
//     printf("%d", sum);
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[1000];
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int k, l;
//     for (k = 0; k < n; k++)
//     {
//         for (l = 0; l < n - 1; l++)
//         {
//             if (arr[l] > arr[l + 1])
//             {
//                 int temp = arr[l];
//                 arr[l] = arr[l + 1];
//                 arr[l + 1] = temp;
//             }
//         }
//     }

//     int diff = arr[n - 2] - arr[1];
//     printf("%d", diff);
// }
// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d%d", &n, &m);
//     int arr1[n];
//     int arr2[m];
//     int arr3[1000];
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     for (j = 0; j < m; j++)
//     {
//         scanf("%d", &arr2[j]);
//     }
//     int k = 0;
//     int l = 0;
//     int in;
//     for (in = 0; in < n + k; in++)
//     {
//         if (k < n && l < m)
//         {
//             if (arr1[k] < arr2[k])
//             {
//                 arr3[in] = arr1[k++];
//             }
//             else
//             {
//                 arr3[in] = arr2[j++];
//             }
//         }
//         else if (k < n)
//         {
//             arr3[in] = arr1[k++];
//         }
//         else
//         {
//             arr3[in] = arr2[l++];
//         }
//     }
//     int ino;
//     for (ino = 0; ino < n + k; ino++)
//     {
//         printf("%d", arr3[ino]);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d", &n);
//     int arr1[n];
//     int arr2[m];
//     int arr3[1000];
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     scanf("%d", &m);
//     for (j = 0; j < m; j++)
//     {
//         scanf("%d", &arr2[j]);
//     }
//     int h = 0;
//     int z = 0;
//     int v = 0;
//     while (h < n && z < m)
//     {

//         if (arr1[h] < arr2[z])
//         {
//             arr3[v] = arr1[h];
//             v++;
//             h++;
//         }
//         else
//         {
//             arr3[v] = arr2[z];
//             v++;
//             z++;
//         }
//     }
//     while (h < n)
//     {
//         arr3[v++] = arr1[h++];
//     }
//     while (z < m)
//     {
//         arr3[v++] = arr2[z++];
//     }
//     int t;
//     for (t = 0; t < v; t++)
//     {
//         printf("%d ", arr3[t]);
//     }
// }
// #include <stdio.h>
// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int arr[1000];
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int j;
//     for (j = 0; j < n; j++)
//     {
//         int num = arr[j];
//         while (num > 0)
//         {
//             int last = num % 10;
//             printf("%d ", last);
//             num = num / 10;
//         }
//     }
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char ch;
//     scanf("%s", &ch);
//     int len = strlen(ch);
//     int i;
//     int sum = 0;
//     int b = 1;
//     printf("%d", len);
//     // for( i=len-1;i>=0;i--){

//     //    if(ch[i]=='1'){
//     //        sum+=b*1;
//     //        b*=2;
//     //    }
//     //    else{
//     //        sum+=b*0;
//     //        b=b*2;
//     //    }
//     // }

//     printf("%d", sum);
// }
// #include <stdio.h>

// int main()

// {
//     int n;
//     scanf("%d", &n);
//     int arr[1000000];
//     int i = 0;
//     while (n > 0)
//     {
//         int last = n % 10;
//         arr[i++] = last;
//         n = n / 10;
//     }
//     printf("%d %d", arr[i - 1], arr[0]);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[1000] = {0};
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int j;
//     int curr = 1;
//     for (j = 0; j < n; j++)
//     {
//         int l;
//         for (l = 0; l < n - j; l++)
//         {
//             if (arr[l] == curr)
//             {
//                 printf("%d ", l);

//                 int k;
//                 for (k = l; k < n; k++)
//                 {
//                     arr[k] = arr[k + 1];
//                 }
//             }
//         }

//         curr++;
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         int arr[1000];
//         int i;
//         for (i = 0; i <= n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         int j, k;
//         for (j = 0; j <= n; j++)
//         {
//             for (k = j + 1; k <= n; k++)
//             {
//                 if (arr[j] == arr[k])
//                 {
//                     printf("%d\n", arr[j]);
//                     break;
//                 }
//             }
//         }
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int t, n;
//     scanf("%d", &t);
//     while (t--)
//     {

//         scanf("%d", &n);
//         int arr[1000];
//         int i;
//         for (i = 0; i <= n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         int j, k;
//         for (j = 0; j <= n; j++)
//         {
//             for (k = j + 1; k <= n; k++)
//             {
//                 if (arr[j] == arr[k])
//                 {
//                     printf("%d\n", arr[j]);
//                     break;
//                 }
//             }
//         }
//     }
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         char ch[1000];
//         scanf("%s", ch);
//         //  int len = strlen(ch);
//         int i;
//         int sum = 0;
//         int b = 1;
//         for (i = n - 1; i >= 0; i--)
//         {

//             if (ch[i] == '1')
//             {
//                 sum += b * 1;
//                 b *= 2;
//             }
//             else
//             {
//                 sum += b * 0;
//                 b = b * 2;
//             }
//         }

//         printf("%d\n", sum);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         int i, j, k, l;
//         for (i = 0; i < n; i++)
//         {
//             for (j = 1; j < n - i; j++)
//             {
//                 printf(" ");
//             }
//             int num = i + 1;
//             for (k = 0; k <= i; k++)
//             {
//                 printf("%d", num);
//                 num++;
//             }
//             num = num - 2;

//             for (l = 0; l < i; l++)
//             {
//                 printf("%d", num);
//                 num--;
//             }

//             printf("\n");
//         }
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n, totalcase;
//     scanf("%d", &n);

//     while (n--)
//     {

//         scanf("%d", &totalcase);
//         int arr[1000];
//         int i, j, k;

//         for (i = 0; i < totalcase; i++)
//         {
//             scanf("%d", &arr[i]);
//         }

//         for (j = 0; j < totalcase; j++)
//         {
//             for (k = j + 1; k < totalcase; k++)
//             {
//                 if (arr[j] == arr[k])
//                 {
//                     printf("%d\n", arr[j]);
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i, j, k, n;
//     scanf("%d", &n);
//     char arr[1000][1000] = {{'\0'}};

//     for (i = 0; i < n; i++)
//     {
//         scanf("%s", arr[i]);
//     }
//     for (k = 0; k < n; k++)
//     {
//         for (j = 0; j < n - 1; j++)
//         {
//             if (strcmp(arr[j], arr[j + 1]) > 0)
//             {
//                 char t[1000];
//                 strcpy(t, arr[j]);
//                 strcpy(arr[j], arr[j + 1]);
//                 strcpy(arr[j + 1], t);
//             }
//         }
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("%s\n", arr[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);

//     int i, j;
//     int n = ch - 'A';
//     char ch1 = 'A';
//     for (i = 0; i <= n; i++)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             if (i == j)
//             {
//                 printf("%c", ch1);
//             }
//             else
//             {
//                 printf("%c ", ch1);
//             }
//         }
//         ch1++;
//         printf("\n");
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int i, j, s, k;
//     for (i = 0; i < n; i++)
//     {
//         for (s = 0; s < n - i - 1; s++)
//         {
//             printf(" ");
//         }
//         int num = i + 1;
//         for (j = 0; j <= i; j++)
//         {
//             printf("%d", num);
//             num++;
//         }
//         num = num - 2;
//         for (k = 0; k < i; k++)
//         {
//             printf("%d", num);
//             num--;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         int arr[1000];
//         int i;
//         for (i = 0; i < n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         int sum = 0;
//         int b = 1;
//         int j;
//         for (j = n - 1; j >= 0; j--)
//         {
//             sum += arr[j] * b;
//             b *= 2;
//         }
//         printf("%d", sum);
//     }
// }
// #include <stdio.h>
// #include <stdbool.h>
// #include <math.h>
// bool isperfect(int n)
// {
//     int s = sqrt(n);
//     return (s * s == n);
// }
// bool isfibbo(int n)
// {
//     return isperfect(5 * n * n + 4) || isperfect(5 * n * n - 4);
// }
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         if (isfibbo(n))
//         {
//             printf("true");
//         }
//         else
//         {
//             printf("false");
//         }
//         return 0;
//     }
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     char arr[100][100] = {{'\0'}};
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%s", arr[i]);
//     }
//     int j, k;
//     for (j = 0; j < n; j++)
//     {
//         for (k = 0; k < n - 1; k++)
//         {
//             if (strcmp(arr[k], arr[k + 1]) > 0)
//             {
//                 char temp[1000];
//                 strcpy(temp, arr[k]);
//                 strcpy(arr[k], arr[k + 1]);
//                 strcpy(arr[k + 1], temp);
//             }
//         }
//     }
//     int l;
//     for (l = 0; l < n; l++)
//     {
//         printf("%s\n", arr[l]);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[1000];
//     char str2[1000];
//     scanf("%s", str1);
//     scanf("%s", str2);
//     int n1 = strlen(str1);
//     int n2 = strlen(str2);
//     if (n1 != n2)
//     {
//         printf("false");
//     }
//     else
//     {
//         int i, j, k, l;
//         for (i = 0; i < n1; i++)
//         {
//             for (j = 0; j < n1 - 1; j++)
//             {
//                 if (str1[j] > str1[j + 1])
//                 {
//                     char temp = str1[j];
//                     str1[j] = str1[j + 1];
//                     str1[j + 1] = temp;
//                 }
//             }
//         }
//         for (k = 0; k < n2; k++)
//         {
//             for (l = 0; l < n2 - 1; l++)
//             {
//                 if (str2[l] > str2[l + 1])
//                 {
//                     char temp2 = str2[l];
//                     str2[l] = str2[l + 1];
//                     str2[l + 1] = temp2;
//                 }
//             }
//         }

//         int t;
//         for (t = 0; t < n1; t++)
//         {
//             if (str1[t] != str2[t])
//             {
//                 printf("false");
//                 break;
//             }
//         }

//         if (t == n1)
//         {
//             printf("true");
//         }
//     }
//     return 0;
// }
