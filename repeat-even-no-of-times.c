#include <stdio.h>

int main() {
    int arr[] = { 9, 12, 23, 10, 12, 12, 15, 23, 14, 12, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int b[n], count = 0, c[100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (arr[j] == arr[i])
                b[i] = ++count;
        count = 0;
    }
    printf("The numbers repeated even no of times are: ");
    for (int i = 0; i < n; i++)
        c[arr[i]] = 0;
    for (int i = 0; i < n; i++) {
        if (c[arr[i]] == 1)
            continue;
        if (b[i] % 2 == 0)
           
           printf( "%d\t",arr[i]);
        c[arr[i]]++;
    }
    return 0;
}