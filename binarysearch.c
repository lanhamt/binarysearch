/*
 * File: binarysearch.c
 * ------------------------------
 * Implementation of simple binary 
 * search on sorted integer array.
 * 
 * Copyright Travis Lanham 2016.
 */

#include "binarysearch.h"

/*
 * Function: binarySearchHelper
 * ------------------------------
 * Helper function for binary search. Takes sorted
 * array of integers, query to search array, 
 * size of the array, and index of the left-most 
 * element being examined and returns index of an
 * element matching query if there is one, otherwise -1.
 */
int binarySearchHelper(int arr[], int query, size_t size, size_t index) {
    if (size == 1) {
        // base case: single element either matches or doesn't
        return arr[0] == query ? index : -1;
    } else {
        // recursive case: if middle element is less then query, 
        //  recurses on lower half; if greater than, recurses on upper
        //  half; if equal to, returns index of middle element.
        size_t middle = size / 2;
        if (arr[middle] < query) {
            return binarySearchHelper(arr + middle, query, size - middle, index + middle);
        } else if (arr[middle] > query) {
            return binarySearchHelper(arr, query, middle, index);
        } else {
            return index + middle;
        }
    }
}

/*
 * Function: binarySearch
 * ------------------------------
 * Given an array of integers, an integer to 
 * find, and the size of the array, returns the 
 * index of a matching element in the array. 
 * If a match is not found, returns -1. 
 */
int binarySearch(int arr[], int query, size_t size) {
    if (size < 1) return -1;
    return binarySearchHelper(arr, query, size, 0);
}
