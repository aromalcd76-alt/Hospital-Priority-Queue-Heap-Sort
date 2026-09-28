Hospital Priority Queue Using Max Heap

1. Problem Statement

A hospital manages patients according to their severity score. A higher severity score represents a higher priority.

The given patient severity scores are:

45, 72, 30, 90, 65, 50, 85

The task is to:

1. Implement a Max Heap and insert all patient severity scores.
2. Display the heap after every insertion.
3. Implement Heap Sort for the same data.
4. Implement Quick Sort for the same data.
5. Record important intermediate steps using trace tables.
6. Compare Heap Sort and Quick Sort based on heap structure, comparisons/swaps, time complexity, and space requirements.
7. Determine the suitable approach for a continuously operating hospital priority queue.

⸻

2. Input Data

Patient	Severity Score
P1	45
P2	72
P3	30
P4	90
P5	65
P6	50
P7	85

⸻

3. Programs Used

The following three C programs are implemented:

1. Max Heap
2. Heap Sort
3. Quick Sort

⸻

4. Data Structure Used

A Max Heap is used to implement the hospital priority queue.

In a Max Heap:

* The parent node is always greater than or equal to its children.
* The largest element is stored at the root.
* The highest-severity patient can therefore be accessed immediately.

⸻

5. Max Heap Insertion

Insertion Trace Table

Step	Inserted Value	Heap After Insertion	Swaps
1	45	45	0
2	72	72 45	1
3	30	72 45 30	0
4	90	90 72 30 45	2
5	65	90 72 30 45 65	0
6	50	90 72 50 45 65 30	1
7	85	90 72 85 45 65 30 50	1

Final Max Heap

             90
           /    \
         72      85
        /  \    /  \
      45   65  30   50

Array representation:

90 72 85 45 65 30 50

⸻

6. Heap Structure and Height

The final heap contains 7 nodes.

Number of levels:

3 levels

Height:

Height = floor(log2(7))
       = 2

Therefore, the height of the Max Heap is 2.

Because the heap is a complete binary tree, insertion and deletion operations take O(log n) time.

⸻

7. Heap Sort

Heap Sort first creates a Max Heap and then repeatedly moves the largest element to the end of the array.

Initial Max Heap

90 72 85 45 65 50 30

Heap Sort Trace Table

Pass	Operation	Array State
Initial	Max Heap created	90 72 85 45 65 50 30
1	Move 90 to end	85 72 50 45 65 30 90
2	Move 85 to end	72 65 50 45 30 85 90
3	Move 72 to end	65 45 50 30 72 85 90
4	Move 65 to end	50 45 30 65 72 85 90
5	Move 50 to end	45 30 50 65 72 85 90
6	Move 45 to end	30 45 50 65 72 85 90

Heap Sort Final Output

30 45 50 65 72 85 90

⸻

8. Quick Sort

Quick Sort uses a pivot to divide the array into smaller sub-arrays.

The implemented program uses the last element as the pivot.

Quick Sort Trace Table

Step	Pivot	Array State
1	85	45 72 30 65 50 85 90
2	50	45 30 50 65 72 85 90
3	30	30 45 50 65 72 85 90
4	72	30 45 50 65 72 85 90
5	90	30 45 50 65 72 85 90

Quick Sort Final Output

30 45 50 65 72 85 90

⸻

9. Heap Sort vs Quick Sort Comparison

Feature	Heap Sort	Quick Sort
Basic technique	Heap-based sorting	Divide and conquer
Data structure	Binary Heap	Array + recursion
Best case	O(n log n)	O(n log n)
Average case	O(n log n)	O(n log n)
Worst case	O(n log n)	O(n²)
Extra space	O(1)	O(log n) average
Worst-case space	O(1)	O(n)
Stable	No	No
Uses recursion	No	Yes
Suitable for priority queue	Yes, as a Max Heap	No
Immediate maximum access	O(1)	Not guaranteed

⸻

10. Comparison of Heap Structure

Property	Result
Number of nodes	7
Number of levels	3
Height	2
Root element	90
Highest severity	90
Heap type	Max Heap
Array representation	90 72 85 45 65 30 50

The root contains 90, which is the highest severity score.

Therefore, the patient with severity 90 has the highest priority.

⸻

11. Comparisons and Swaps Observed During Max Heap Insertion

For the given insertion sequence:

Inserted Value	Comparisons	Swaps
45	0	0
72	1	1
30	1	0
90	2	2
65	1	0
50	1	1
85	1	1
Total	7	5

These counts refer specifically to the Max Heap insertion process.

⸻

12. Time Complexity

Algorithm / Operation	Best	Average	Worst
Max Heap Insertion	O(log n)	O(log n)	O(log n)
Get Maximum	O(1)	O(1)	O(1)
Delete Maximum	O(log n)	O(log n)	O(log n)
Heap Sort	O(n log n)	O(n log n)	O(n log n)
Quick Sort	O(n log n)	O(n log n)	O(n²)

⸻

13. Space Complexity

Algorithm	Extra Space
Max Heap	O(n) for storing heap
Heap Sort	O(1) auxiliary space
Quick Sort	O(log n) average recursion space
Quick Sort worst case	O(n) recursion space

⸻

14. Performance Comparison

Criteria	Heap Sort	Quick Sort
Sorting speed	O(n log n) guaranteed	O(n log n) average
Worst-case guarantee	Yes	No
Extra memory	O(1)	O(log n) average
Heap structure	Required	Not required
Priority queue support	Directly related	Not suitable
Highest-priority access	O(1) using Max Heap	Not directly available

⸻

15. Suitability for Hospital Priority Queue

For a hospital priority queue, patients may continuously arrive and the hospital needs to identify the patient with the highest severity immediately.

A Max Heap provides:

* Insertion: O(log n)
* Highest-priority access: O(1)
* Highest-priority removal: O(log n)

The maximum severity value is always maintained at the root.

For the given data:

90

is the highest severity score and is therefore immediately available at the root.

Heap Sort and Quick Sort are primarily sorting algorithms. They produce a sorted list but do not themselves provide the same direct priority-queue operations as a Max Heap.

⸻

16. Final Results

Input

45 72 30 90 65 50 85

Final Max Heap

90 72 85 45 65 30 50

Heap Height

2

Heap Sort Output

30 45 50 65 72 85 90

Quick Sort Output

30 45 50 65 72 85 90

⸻

17. Conclusion

The Max Heap successfully implements the hospital priority queue because the highest severity patient is always maintained at the root.

For the given input, the final Max Heap is:

90 72 85 45 65 30 50

The sorting algorithms produce the same sorted output:

30 45 50 65 72 85 90

For a continuously operating hospital priority queue, the Max Heap directly supports continuous insertion and immediate access to the highest-priority patient with efficient O(log n) insertion and O(1) maximum access.

⸻

18. Suggested GitHub Repository Structure

Hospital-Priority-Queue-Heap-Sort/
│
├── README.md
│
├── Source_Code/
│   ├── max_heap.c
│   ├── heap_sort.c
│   └── quick_sort.c
│
├── Input_Data/
│   └── input.txt
│
├── Output/
│   ├── max_heap_output.txt
│   ├── heap_sort_output.txt
│   └── quick_sort_output.txt
│
├── Trace_Table/
│   └── trace_table.txt
│
├── Complexity_Analysis/
│   └── complexity_analysis.txt
│
└── Comparison_Table/
    └── comparison_table.txt

19. Assignment Requirements Checklist

Requirement	Included
Max Heap implementation	✓
Heap after each insertion	✓
Heap Sort implementation	✓
Quick Sort implementation	✓
Intermediate steps	✓
Trace tables	✓
Final outputs	✓
Heap structure	✓
Heap height	✓
Comparisons/swaps	✓
Time complexity	✓
Space requirements	✓
Heap Sort vs Quick Sort comparison	✓
Priority queue suitability	✓
Final conclusion	✓
GitHub repository structure	✓