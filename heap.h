//
// Created by Manju Muralidharan on 10/19/25.
//

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
using namespace std;

struct MinHeap {
    int data[64];
    int size;

    /*constructor: that initalizes instances of minHeaps with an initial size of
     * 0 and a capacity of 64 integers
    */
    MinHeap() { size = 0; }

    //inserting at the end of the heap
    void push(int idx, int weightArr[]) {
        // TODO: insert index at end of heap, restore order using upheap()
        //adds new element to end of array
        weightArr[size] = idx;
        //increases the current size of the array
        size++;

        //restore with upheap
        upheap(weightArr[size], weightArr);

    }

    //removing and returning the root node
    int pop(int weightArr[]) {
        // TODO: remove and return smallest index
        // Replace root with last element, then call downheap()
        weightArr[0] = weightArr[size - 1];
        size--;
        //commit comment

        return -1; // placeholder
    }

    void upheap(int pos, int weightArr[]) {
        // TODO: swap child upward while smaller than parent
    }

    void downheap(int pos, int weightArr[]) {
        // TODO: swap parent downward while larger than any child
    }
};

#endif