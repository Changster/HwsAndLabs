#include <string.h>
#include <stdio.h>

int binarySearch(int *arr, int start, int end, int item);

int main()
{
	int arr[] = {1, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	//           0  1  2  3
	//int arr[] = {1, 3, 5, 7, 9, 11};
	int item = 99;
	//note: item cannot be less than 1
	int res = binarySearch(arr, 0, (sizeof(arr)/sizeof((int)-1)), item);
	if (res)
		printf("%d is in the array\n", item);
	else
		printf("%d is not in the array\n", item);
	return 0;
}


int binarySearch(int *arr, int start, int end, int item)
{
	//base case
	//printf("the end is: %d\n", (sizeof(arr)/sizeof((int)-1)));
	if (start == end)
	{
	 	if(arr[start]==item)
	 		return 1;
	 	else
	 		return 0;
	}
	int mid = (end - start)/2;
	//mid = location 1

	//split into smaller subproblems
	//search right side if item is greater than number at middle
	if (item > arr[start + mid])
	{
		//printf("Start is: %d\n", start);
		//printf("mid is: %d\n", start+mid);
		//printf("end is: %d\n", end);
		binarySearch(arr, start + mid + 1, end, item);
	}
	//search left side if item is less than number at middle
	else if (item < arr[start+mid])
	{
		//printf("Start is: %d\n", start);
		//printf("mid is: %d\n", start+mid);
		//printf("end is: %d\n", end);
		binarySearch(arr, start, start + mid - 1, item);
	}
	else //return 1 if item is found and 0 if not
	{
		if (item != arr[start+mid])
			return 0;
		else
			return 1;
	}
}