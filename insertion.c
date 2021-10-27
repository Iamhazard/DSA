#include <stdio.h>
int main()
{
 int arr[100] = { 0 };
 int i, x, pos, n = 8;
 for (i = 0; i < 5; i++)
 arr[i] = i + 1;
 for (i = 0; i < n; i++)
 printf("%d ", arr[i]);
 printf("\n");
 x = 56;
 pos = 8;
 n++;
 for (i = n-1; i >= pos; i--)
 arr[i] = arr[i - 1];
 arr[pos - 1] = x;
 for (i = 0; i < n; i++)
 printf("%d ", arr[i]);
 printf("\n");
 return 0;
}
