🏥 Hospital Priority Queue Using Max Heap

Data Structures Lab Project

1. Problem Statement

A hospital manages patients according to their severity score.
A higher severity score means a higher priority.

Input:

45, 72, 30, 90, 65, 50, 85

The project implements:

* Max Heap
* Heap Sort
* Quick Sort

⸻

2. Max Heap

A Max Heap keeps the highest-priority patient at the root.

Insertion Trace

Step	Insert	Heap
1	45	45
2	72	72 45
3	30	72 45 30
4	90	90 72 30 45
5	65	90 72 30 45 65
6	50	90 72 50 45 65 30
7	85	90 72 85 45 65 30 50

Final Heap

          90
        /    \
      72      85
     /  \    /  \
   45   65  30   50

Height: 2
Highest Priority: 90

⸻

3. Heap Sort

Trace Table

Pass	Array
Initial	90 72 85 45 65 50 30
1	85 72 50 45 65 30 90
2	72 65 50 45 30 85 90
3	65 45 50 30 72 85 90
4	50 45 30 65 72 85 90
5	45 30 50 65 72 85 90
6	30 45 50 65 72 85 90

Final Output:

30 45 50 65 72 85 90

⸻

4. Quick Sort

Pivot: Last element

Trace Table

Step	Pivot	Array
1	85	45 72 30 65 50 85 90
2	50	45 30 50 65 72 85 90
3	30	30 45 50 65 72 85 90
4	72	30 45 50 65 72 85 90
5	90	30 45 50 65 72 85 90

Final Output:

30 45 50 65 72 85 90

⸻

5. Complexity Comparison

Operation	Complexity
Max Heap Insertion	O(log n)
Get Maximum	O(1)
Delete Maximum	O(log n)
Heap Sort	O(n log n)
Quick Sort – Average	O(n log n)
Quick Sort – Worst	O(n²)

⸻

6. Heap Sort vs Quick Sort

Feature	Heap Sort	Quick Sort
Average Time	O(n log n)	O(n log n)
Worst Time	O(n log n)	O(n²)
Extra Space	O(1)	O(log n) average
Recursion	No	Yes
Stable	No	No

⸻

7. Max Heap Analysis

Property	Value
Number of Nodes	7
Levels	3
Height	2
Root	90
Heap Type	Max Heap
Insertion Comparisons	7
Insertion Swaps	5

⸻

8. Why Max Heap?

For a continuously operating hospital priority queue:

* New patients can be inserted efficiently.
* The highest-severity patient is always at the root.
* Highest-priority access takes O(1).
* Insertion takes O(log n).
* Removing the highest-priority patient takes O(log n).

Therefore, a Max Heap directly supports the required priority-queue operations.

⸻

9. Final Result

Input

45 72 30 90 65 50 85

Max Heap

90 72 85 45 65 30 50

Sorted Output

30 45 50 65 72 85 90

⸻

10. Conclusion

The project successfully implements a Max Heap, Heap Sort, and Quick Sort using the given patient severity scores.

The Max Heap maintains the highest-severity patient at the root, making it suitable for a hospital priority queue where patients are continuously inserted and the highest-priority patient must be accessed immediately.