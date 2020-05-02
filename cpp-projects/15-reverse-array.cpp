#include <iostream>
using namespace std;

void Reverse_Array(int arr[], int size)
{
	int i, j, temp;

	j = size - 1; // now j will point to the last element
	i = 0;		  //  and i will be point to the first element
	while (i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;

	}

}

int main()
{
	int arr[50], size, i;
	std::cout << "Enter array size : ";
	std::cin >> size;
	std::cout << "Enter array elements : ";
	for (i = 0; i < size; i++)
	{
		std::cin >> arr[i];

	}

	Reverse_Array (arr,size);


	std::cout << "Now the Reverse of the Array is : \n";
	for (i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\n";
	}
	cout << "\n";

	return 0;
}
