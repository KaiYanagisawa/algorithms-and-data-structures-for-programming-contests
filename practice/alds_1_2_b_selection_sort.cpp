#include <iostream>

using namespace std;

int selection_sort(int N, int array[])
{
  int swap_number = 0;
  for (int i = 0; i < N; i++)
  {
    int min = i;
    for (int j = i; j < N; j++)
    {
      if (array[min] > array[j])
        min = j;
    }
    if (i != min)
    {
      swap(array[i], array[min]);
      swap_number++;
    }
  }

  return swap_number;
}

int main()
{
  int N;
  cin >> N;

  int array[100];
  for (int i = 0; i < N; i++)
    cin >> array[i];

  int swap_number = selection_sort(N, array);

  for (int i = 0; i < N; i++)
    (i == N - 1) ? cout << array[i] << endl : cout << array[i] << " ";
  cout << swap_number << endl;

  return 0;
}
