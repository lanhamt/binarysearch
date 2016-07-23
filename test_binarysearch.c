/*
 * File: test_binarysearch.c
 * ------------------------------
 * Test for binarysearch library.
 */

 #include <stdio.h>
 #include <assert.h>
 #include <time.h>
 #include "binarysearch.h"

 int main(int argc, const char* argv[]) {
    printf("--------------- Starting Tests ---------------\n");
    time_t start = clock();
    size_t passed = 0;

    int testArray[0] = {};
    if (binarySearch(testArray, 1, 0) == -1) passed++;

    printf("Testing complete:\n");
    printf("    %zu tests passed in %lu miliseconds.\n", passed, clock() - start);
 }