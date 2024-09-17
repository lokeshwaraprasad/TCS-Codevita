#include <stdio.h>

int bubbleasc(int arr[], int n) {
    int i, j, temp;
    int count = 0;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                count++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return count;
}

int bubbledes(int arr[], int n) {
    int i, j, temp;
    int count = 0;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                count++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], original[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        original[i] = arr[i];
    }

    int count1 = bubbleasc(arr, n);

    for (int i = 0; i < n; i++) {
        arr[i] = original[i];
    }

    int count2 = bubbledes(arr, n);

    int min = (count1 < count2) ? count1 : count2;

    printf("%d\n", min);

    return 0;
}
