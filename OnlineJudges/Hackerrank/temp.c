#include <stdio.h>
int check(int arr[], int n)
{
    int i;
        for(i = 0; i < n; i++)
        {
           if(arr[i] == 1)
          {
              return 10;
          }

        }
}

int main()
{
    int i, n, arr[100], l = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    l = check(arr, n);
    if(l == 10)
        printf("HARD");
    else
        printf("EASY");

}
