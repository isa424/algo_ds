#include "pch.h"

template <typename T>
void swap(T *a, T *b)
{
	T temp = *b;
	*b = *a;
	*a = temp;
}

template <typename T>
void bubble_sort(T *list, int size)
{
	bool sorted = false;
	int last_index = size - 1, i;

	while (!sorted && last_index > 0) {
		sorted = true;

		for (i = 1; i <= last_index; i++) {
			if (list[i - 1] > list[i]) {
				swap(list + (i - 1), list + i);
				sorted = false;
			}
		}

		last_index--;
	}
}

template <typename T>
void selection_sort(T *list, int size)
{
	int sorted_until = 0, min_index, last_index = size - 1, i;

	while (sorted_until < last_index) {
		min_index = sorted_until;

		for (i = sorted_until + 1; i <= last_index; i++) {
			if (list[min_index] > list[i]) {
				min_index = i;
			}
		}

		if (list[sorted_until] > list[min_index]) {
			swap(list + min_index, list + sorted_until);
		}

		sorted_until++;
	}
}

template <typename T>
void insertion_sort(T *list, int size)
{
	int last_index = size - 1, sorted_until = 0, next_index;

	while (sorted_until < last_index) {
		next_index = sorted_until + 1;

		while (next_index > 0 && list[next_index] < list[next_index - 1]) {
			swap(list + next_index, list + next_index - 1);
			next_index--;
		}

		sorted_until++;
	}
}

// TODO
template <typename>
void merge_sort(T *list, int size)
{

}
