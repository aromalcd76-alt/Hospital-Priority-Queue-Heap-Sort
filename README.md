# Hospital Priority Queue Using Max Heap

## Problem
A hospital manages patients according to severity.
A higher severity score represents a higher priority.

## Input
45, 72, 30, 90, 65, 50, 85

## Programs
1. Max Heap
2. Heap Sort
3. Quick Sort

## Data Structure
Max Heap is used as the priority queue.

## Final Max Heap
90 72 85 45 65 30 50

## Sorted Output
30 45 50 65 72 85 90

## Complexity
- Max Heap insertion: O(log n)
- Highest-priority access: O(1)
- Heap Sort: O(n log n)
- Quick Sort average: O(n log n)
- Quick Sort worst: O(n²)

## Conclusion
For continuous patient insertion where the highest-severity
patient must be available immediately, a Max Heap supports
the required priority-queue operations efficiently.
