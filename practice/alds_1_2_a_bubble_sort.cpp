#include <iostream>

using namespace std;

int bubble_sort(int N, int array[])
{
  int flag = 1;
  int swap_number = 0;

  for (int i = 0; flag; i++)
  {
    flag = 0;
    for (int j = N - 1; j > i; j--)
    {
      if (array[j] < array[j - 1])
      {
        swap(array[j], array[j - 1]);
        flag = 1;
        swap_number++;
      }
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

  int swap_number = bubble_sort(N, array);

  for (int i = 0; i < N; i++)
    (i == N - 1) ? cout << array[i] << endl : cout << array[i] << " ";

  cout << swap_number << endl;

  return 0;
}
