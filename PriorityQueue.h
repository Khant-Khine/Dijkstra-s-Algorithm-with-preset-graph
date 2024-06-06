// ---------------------------------------------------------------------------
// Group Number: 6
// Group Members: Mackenzie Thompson, Khant Khine, Navraj Singh
// Course-Section: CS355-Section 1
// Assignment: CS-355 Final Project
// Date due: 04/14/2024
// Description: This is the PriorityQueue class, which is a template priority
//              queue using a min heap. This class is used to effectively
//              implement Dijkstra's algorithm.
// Author: Khant Khine
// ---------------------------------------------------------------------------
#include<iostream>
using namespace std;

template <class T>

// Definition of PriorityQueue class
class PriorityQueue
{
private:

    // Vector to store elements of the heap
    vector<T> heap;

    // Method to heapify up to maintain a heap
    void heapifyUp(int index);

    // Method to heapify down to maintain a heap
    void heapifyDown(int index);

public:

    // Constructor
    PriorityQueue();

    // Method to check if priority queue is empty
    bool empty() const;

    // Method to push an element onto the priority queue
    void push(T v);

    // Method to get the element with highest priority
    T top();

    // Method to remove the element with highest priority
    void pop();
};

// ---------------------------------------------------------------------------
// PriorityQueue() is the default constructor of the PriorityQueue class.
// It constructs an empty priority queue.
//      INCOMING DATA: None.
//      OUTGOING DATA: None.
// Author: Khant Khine
// ---------------------------------------------------------------------------
template <class T>
PriorityQueue<T>::PriorityQueue()
{}

// ---------------------------------------------------------------------------
// empty() is the method of the PriorityQueue class, which checks if the
// priority queue is empty.
//      INCOMING DATA: None.
//      OUTGOING DATA: boolean value for whether the priority queue is empty
//                      or not.
// Author: Khant Khine
// ---------------------------------------------------------------------------
template <class T>
bool PriorityQueue<T>::empty() const
{
    // Returns true if heap is empty. Else, return false.
    return heap.empty();
}

// ---------------------------------------------------------------------------
// heapifyUp() is the method of the PriorityQueue class, which maintains the
// min heapproperly by moving the element up at an index of the heap if it
// is necessary.
//      INCOMING DATA: Index of the element to be moved up.
//      OUTGOING DATA: None.
// Author: Khant Khine
// ---------------------------------------------------------------------------
template <class T>
void PriorityQueue<T>::heapifyUp(int index)
{
    // Loop while index is greater than 0
    while (index > 0)
    {
        // Calculate index of parent node, through array representation of heap.
        int parent = (index - 1) / 2;

        // If current node is smaller than parent, swap occurs between parent and current node.
        if (heap[index].getDistance() < heap[parent].getDistance())
        {
            // Swap current node with parent
            swap(heap[index], heap[parent]);

            // Move index to parent
            index = parent;
        }
        // If current node is not smaller than parent, that means the node is in the right place.
        else
        {
            // Exit the loop
            break;
        }
    }
}

// ---------------------------------------------------------------------------
// heapifyDown() is the method of the PriorityQueue class, which maintains
// the min heap properly by moving the element down at an index of the heap
// if it is necessary.
//      INCOMING DATA: Index of the element to be moved down.
//      OUTGOING DATA: None.
// Author: Khant Khine
// ---------------------------------------------------------------------------
template <class T>
void PriorityQueue<T>::heapifyDown(int index)
{
    // Get the size of the heap.
    int n = heap.size();

    // Infinite loop
    while (true)
    {
        // Calculate index of left child
        int leftChild = 2 * index + 1;

        // Calculate index of right child
        int rightChild = 2 * index + 2;

        // Initialize smallest as the current index
        int smallest = index;

        // If left child exists and is smaller, left child becomes the smallest.
        if (leftChild < n && heap[leftChild].getDistance() < heap[smallest].getDistance())
        {
            // Update smallest
            smallest = leftChild;
        }

        // If right child exists and is smaller, right child becomes the smallest.
        if (rightChild < n && heap[rightChild].getDistance() < heap[smallest].getDistance())
        {
            // Update smallest
            smallest = rightChild;
        }

        // If smallest is not the current index, we implement a swap between the indexes.
        if (smallest != index)
        {
            // Swap current node with smallest
            swap(heap[index], heap[smallest]);

            // Move index to smallest
            index = smallest;
        }

        // If smallest is the current index, it is already the smallest and nothing needs to be done.
        else
        {
            // Exit the loop
            break;
        }
    }
}

// ---------------------------------------------------------------------------
// push(T v) is a method of the PriorityQueue class. It inserts an element into
// the priority queue.
//      INCOMING DATA: Data Structure to be inserted.
//      OUTGOING DATA: None.
// Author: Khant Khine
// ---------------------------------------------------------------------------
template <class T>
void PriorityQueue<T>::push(T v)
{
    // Add a node to the end of heap
    heap.push_back(v);

    // Heapify up the last node
    heapifyUp(heap.size() - 1);
}

// ---------------------------------------------------------------------------
// top() is a method of the PriorityQueue class. It gets the element with the
// highest priority.
//      INCOMING DATA: None.
//      OUTGOING DATA: Data Structure of the element with highest priority.
// Author: Khant Khine
// ---------------------------------------------------------------------------
template <class T>
T PriorityQueue<T>::top()
{
    // Return the element at the top of the heap, which is the shortest distance from origin
    return heap[0];
}

// ---------------------------------------------------------------------------
// pop() is a method of the PriorityQueue class. It removes the element with the
// highest priority.
//      INCOMING DATA: None.
//      OUTGOING DATA: None.
// Author: Khant Khine
// ---------------------------------------------------------------------------
template <class T>
void PriorityQueue<T>::pop()
{
    // Replace the root of the heap with the last node in the heap
    heap[0] = heap.back();

    // Remove the last element from the heap
    heap.pop_back();

    // Heapify down from the root to maintain heap property
    heapifyDown(0);
}

