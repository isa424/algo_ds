#pragma once

template <typename T>
void swap(T *a, T *b);

template <typename T>
void bubble_sort(T *list, int size);

template <typename T>
void selection_sort(T *list, int size);

template <typename T>
void insertion_sort(T *list, int size);

template <typename>
void merge_sort(T *list, int size);

#include "functions.cpp"
