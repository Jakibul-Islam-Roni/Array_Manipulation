
#include <stdio.h>

int main() {
    int a[1000], b[1000], c[1000], d[1000];
    int n, p, x, del, target;
    int i, j, temp, pos, count;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Insertion
    scanf("%d %d", &p, &x);

    for(i = n; i > p; i--)
        a[i] = a[i - 1];

    a[p] = x;
    n++;

    // Deletion
    scanf("%d", &del);

    for(i = 0; i < n; i++) {
        if(a[i] == del) {
            for(j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
            break;
        }
    }

    // Display updated array
    printf("Updated Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Copy array for sorting
    for(i = 0; i < n; i++)
        b[i] = c[i] = d[i] = a[i];

    // Bubble Sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    printf("Bubble Sort: ");
    for(i = 0; i < n; i++)
        printf("%d ", b[i]);
    printf("\n");

    // Insertion Sort
    for(i = 1; i < n; i++) {
        temp = c[i];
        j = i - 1;

        while(j >= 0 && c[j] > temp) {
            c[j + 1] = c[j];
            j--;
        }
        c[j + 1] = temp;
    }

    printf("Insertion Sort: ");
    for(i = 0; i < n; i++)
        printf("%d ", c[i]);
    printf("\n");

    // Selection Sort
    for(i = 0; i < n - 1; i++) {
        pos = i;

        for(j = i + 1; j < n; j++) {
            if(d[j] < d[pos])
                pos = j;
        }

        temp = d[i];
        d[i] = d[pos];
        d[pos] = temp;
    }

    printf("Selection Sort: ");
    for(i = 0; i < n; i++)
        printf("%d ", d[i]);
    printf("\n");

    // Linear Search
    scanf("%d", &target);
    count = 0;
    pos = -1;

    for(i = 0; i < n; i++) {
        count++;

        if(a[i] == target) {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        printf("Linear Search: Found at Index %d (Comparisons: %d)\n", pos, count);
    else
        printf("Linear Search: Not Found (Comparisons: %d)\n", count);

    // Binary Search (using sorted array)
    int low = 0, high = n - 1, mid;
    count = 0;
    pos = -1;

    while(low <= high) {
        mid = (low + high) / 2;
        count++;

        if(b[mid] == target) {
            pos = mid;
            break;
        }
        else if(target < b[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(pos != -1)
        printf("Binary Search: Found at Index %d (Comparisons: %d)\n", pos, count);
    else
        printf("Binary Search: Not Found (Comparisons: %d)\n", count);

    return 0;
}
