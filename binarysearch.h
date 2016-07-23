/*
 * File: binarysearch.h
 * ------------------------------
 * Interface for simple binary search 
 * on sorted integer array.
 * 
 * Copyright Travis Lanham 2016.
 */

#ifndef BINARYSEARCH_BINARYSEARCH_H_
#define BINARYSEARCH_BINARYSEARCH_H_

#include <stdlib.h>

/*
 * Function: binarySearch
 * ------------------------------
 * Given an array of integers, an integer to 
 * find, and the size of the array, returns the 
 * index of a matching element in the array. 
 * If a match is not found, returns -1. 
 */
extern int binarySearch(int arr[], int query, size_t size);

#endif  // BINARYSEARCH_BINARYSEARCH_H_
