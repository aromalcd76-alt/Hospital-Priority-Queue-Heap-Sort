#include <stdio.h>

#define SIZE 20

int heap[SIZE];
int n = 0;

void insert(int value)
{
    int i = n;
    heap[n] = value;
    n++;

    while (i > 0 && heap[(i - 1) / 2] < heap[i])
    {
        int temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;

        i = (i - 1) / 2;
    }
}

void display()
{
    for (int i = 0; i < n; i++)
        printf("%d ", heap[i]);

    printf("\n");
}

int main()
{
    int patients[] = {45, 72, 30, 90, 65, 50, 85};
    int size = 7;

    printf("HOSPITAL PRIORITY QUEUE - MAX HEAP\n");
    printf("Higher severity = Higher priority\n");

    printf("\n--- MAX HEAP INSERTION ---\n");

    for (int i = 0; i < size; i++)
    {
        printf("\nInsert %d\n", patients[i]);

        insert(patients[i]);

        printf("Heap: ");
        display();
    }

    return 0;
}