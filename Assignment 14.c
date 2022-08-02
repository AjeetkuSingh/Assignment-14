//Assignment 14 sol 1//
/*
#include <stdio.h>

// function to return sum of elements
// in an array of size n
int sum(int arr[], int n)
{
	int sum = 0; // initialize sum

	// Iterate through all elements
	// and add them to sum
	for (int i = 0; i < n; i++)
	sum += arr[i];

	return sum;
}

int main()
{
	int arr[] = {12, 3, 4, 15};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Sum of given array is %d", sum(arr, n));
	return 0;
}
*/

//Sol 2//
/*
#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
*/

//Sol 3//
/*
#include<stdio.h>

int main()
{
 int Size, i, a[10];
 int Even_Sum = 0, Odd_Sum = 0;

 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &Size);

 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }

 for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Even_Sum = Even_Sum + a[i];
   }
   else
   {
 	Odd_Sum = Odd_Sum + a[i];
   }
 }

 printf("\n The Sum of Even Numbers in this Array = %d ", Even_Sum);
 printf("\n The Sum of Odd Numbers in this Array = %d ", Odd_Sum);
 return 0;
}
*/

//Sol 4//
/*
#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}
*/

//Sol 5//
/*
#include<stdio.h>
int main()
{
  int a[10], Size, i, Smallest, Position;

  printf("\nPlease Enter the size of an array \n");
  scanf("%d",&Size);

  printf("\nPlease Enter %d elements of an array: \n", Size);
  for(i=0; i<Size; i++)
   {
   	 scanf("%d",&a[i]);
   }

  Smallest = a[0];
  for(i=1; i<Size; i++)
   {
    if(Smallest > a[i])
     {
       Smallest = a[i];
       Position = i;
	 }
   }

  printf("\nSmallest element in an Array = %d", Smallest);
  printf("\nIndex position of the Smallest element = %d", Position);

  return 0;
}
*/

//Sol 6//
/*
#include <stdio.h>
    void main()
    {

        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);

    }
*/

//Sol 7//
/*
#include <stdio.h>
#include<stdlib.h>

// Compare function for qsort
int cmpfunc(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}


void print2largest(int arr[], int arr_size)
{
	int i, first, second;

	if (arr_size < 2) {
		printf(" Invalid Input ");
		return;
	}
	// sort the array
	qsort(arr, arr_size, sizeof(int), cmpfunc);
	// start from second last element as the largest element
	// is at last
	for (i = arr_size - 2; i >= 0; i--) {
		// if the element is not
		// equal to largest element
		if (arr[i] != arr[arr_size - 1]) {
			printf("The second largest element is %d\n",arr[i]);
			return;
		}
	}
	printf("There is no second largest element\n");
}


int main()
{
	int arr[] = { 12, 35, 1, 10, 34, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	print2largest(arr, n);
	return 0;
}
*/

//Sol 8//
/*
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]);   //Accessing the smallest element
    printf("\n");
    printf("The second largest element is %d",a[1]);      //Accessing the largest element
    return 0;
}
*/

//Sol 9//
/*
#include <stdio.h>

void main()
{
   int i,n,a[100];

       printf("\n\nRead n number of values in an array and display it in reverse order:\n");
       printf("------------------------------------------------------------------------\n");

   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);

   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }

   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("% 5d",a[i]);
	 }

   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n");
}
*/

//Sol 10//
#include <stdio.h>

int main()
{
    //Initialize array
    int arr1[] = {1, 2, 3, 4, 5};

    //Calculate length of array arr1
    int length = sizeof(arr1)/sizeof(arr1[0]);

    //Create another array arr2 with the size of arr1.

    int arr2[length];

    //Copying all elements of one array into another
    for (int i = 0; i < length; i++) {
        arr2[i] = arr1[i];
    }

    //Displaying elements of array arr1
    printf("Elements of original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    //Displaying elements of array arr2
    printf("Elements of new array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
