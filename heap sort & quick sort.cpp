/*
 This code can be compiled and run ok.

 This code is to read a natural number, a lower bound, an upper bound to randomly output a series of number, and then sort the series of number by heap sort and quick sort seperately

 usage: d44051208_hw4 xx1 xx2 xx3
        where xx1 is to input num of integers you want to calculate, and xx2 is the lowerbound,xx3 is the upper bound, after operation, you can get two series of sorted numbers by heap sort and quick sort seperately
 input file:
 none
 output file:
 none
 
 compile:
 gcc -o d44051208_hw4 d44051208_hw4.cpp
 
 DUPLICATE_ARRAY(**A, **B, m, n)
     for j = 0 to m
         for i = 0 to n
             B[j][i] = A[j][i];

 PRINTOUT_ARRAY(**ptr, m, n) {
     for j = 0 to m
         for i = 0 to n
             print(ptr[j][i])
 
MAX_HEAPIFY(**A, parent, n) {
         let large be parent;
         let left_side be 2 * parent + 1
         let right_side be 2 * parent + 2
         if (left_side < n && A[0][left_side] > A[0][parent]) {
          let large be left_side;
         }
         if (right_side < n && A[0][right_side] > A[0][large]) {
             let large be right_side;
         }
         if (large is not parent) {
             int temp;
             let temp be A[0][parent];
             let A[0][parent] be A[0][large];
             let A[0][large] be temp;
             max_heapify(A, large, n);
         }
     
 }

 HEAP_SORT(**A,n)
     for i = n / 2 - 1 to 0
         max_heapify(array_ptr_A, i, n);
     
     for i = n - 1 to 0
         swap(A[0][i], A[0][0]);
         max_heapify(A, 0, i);
     

 PARTITION(int **B, int first, int last) {
     let compare_value be B[0][last];
     int i = first - 1;//intial the compare tag
     for (int j = first; j < last; j++) {
         if (B[0][j] < compare_value) {
             i++;
             swap(B[0][i], B[0][j]);
         }
     }
     i++;
     swap(B[0][i], B[0][last]);
     return i;
 }



 void quick_sort(int**array_ptr_B, int first, int last) {
     if (first < last) {
         int next_compare_value = partition(B, first, last);
         partition(B, first, next_compare_value-1);
         partition(B, next_compare_value + 1, last);
     
 }
 MAIN()
 
 randomNumber()
 let n, a_min, a_max
 print("Please input [n, a_min, a_max]: ")
 read n a_min a_max
 arrayA<-an 2D-array from 1 to n
 arrayB<-an 2D-array from 1 to n
 for i(0 to 1)
    for j(1 to n)
     do A[j]=rand() % (a_max - a_min + 1) + a_min
 printout_array(A, 1, n)
 duplicate_array(A, B, n)
 print("By heap sort: ")
 heap_sort(A, n);
 printout_array(A, 1, n)
 print("By quick sort: ")
 quick_sort(B, 0, n-1)
 printout_array(B, 1, n)
 
 coded by Chen Yu Syuan, ID: D44051208, email: d44051208@gs.ncku.edu.tw date: 2019.11.17
 
 */

#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void duplicate_array(int **array_ptr_A, int**array_ptr_B, int m, int n) {
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            array_ptr_B[j][i] = array_ptr_A[j][i];
        }
    }
}

void printout_array(int **array_ptr, int m, int n) {
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n ; i++) {
            cout << array_ptr[j][i] << " ";
        }
    }
    cout << endl;
}

void max_heapify(int**array_ptr_A, int parent, int n) {
        int large=parent;
        int left_side = 2 * parent + 1;//left side child
        int right_side = 2 * parent + 2;//right side child
        if (left_side < n && array_ptr_A[0][left_side] > array_ptr_A[0][parent]) {
        large =left_side;
        }
        if (right_side < n && array_ptr_A[0][right_side] > array_ptr_A[0][large]) {
            large = right_side;
        }
        if (large != parent) {
            int temp;
            temp = array_ptr_A[0][parent];
            array_ptr_A[0][parent] = array_ptr_A[0][large];
            array_ptr_A[0][large] = temp;
            max_heapify(array_ptr_A, large, n);
        }
    
}

void heap_sort(int**array_ptr_A, int n) {
    for (int i = n / 2 - 1; i >=0; i--) {
        max_heapify(array_ptr_A, i, n);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(array_ptr_A[0][i], array_ptr_A[0][0]);
        max_heapify(array_ptr_A, 0, i);
    }
}

int partition(int **array_ptr_B, int first, int last) {
    int compare_value = array_ptr_B[0][last];
    int i = first - 1;//intial the compare tag
    for (int j = first; j < last; j++) {
        if (array_ptr_B[0][j] < compare_value) {
            i++;
            swap(array_ptr_B[0][i], array_ptr_B[0][j]);
        }
    }
    i++;
    swap(array_ptr_B[0][i], array_ptr_B[0][last]);
    return i;
}



void quick_sort(int**array_ptr_B, int first, int last) {
    if (first < last) {
        int next_compare_value = partition(array_ptr_B, first, last);
        partition(array_ptr_B, first, next_compare_value-1);
        partition(array_ptr_B, next_compare_value + 1, last);
    }
}

int main() {
    //srand(time(NULL));
    srand( (unsigned)time(NULL));
    int n, a_min, a_max;
    cout << "Please input [n, a_min, a_max]: ";
    cin >> n>>a_min >> a_max;
    int **array_A = new int*[1];
    for (int i = 0; i < 1; i++) {
        array_A[i] = new int[n];
    }//2D-array_A
    int **array_B = new int*[1];
    for (int i = 0; i < 1; i++) {
        array_B[i] = new int[n];
    }//2D-array_B
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < n; j++) {
            array_A[i][j] = rand() % (a_max - a_min + 1) + a_min;
        }
    }
    printout_array(array_A, 1, n);
    duplicate_array(array_A, array_B, 1, n);
    cout << "By heap sort" << endl;
    heap_sort(array_A, n);
    printout_array(array_A, 1, n);
    cout << "By quick sort" << endl;
    quick_sort(array_B, 0, n-1);
    printout_array(array_B, 1, n);
    return 0;
}

