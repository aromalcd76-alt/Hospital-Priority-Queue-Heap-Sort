#include <stdio.h>

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;

            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);

        printf("Pivot %d: ", a[p]);
        display(a, 7);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[] = {45, 72, 30, 90, 65, 50, 85};
    int n = 7;

    printf("QUICK SORT\n");

    printf("\nInput: ");
    display(a, n);

    printf("\nIntermediate Steps:\n");

    quickSort(a, 0, n - 1);

    printf("\nSorted Output: ");
    display(a, n);

    return 0;
}