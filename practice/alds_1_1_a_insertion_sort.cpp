#include <iostream>

using namespace std;

void insertion_sort(int N, int array[])
{
  for (int i = 0; i < N; i++)
  {
    int v = array[i];
    int j = i - 1;
    while (j >= 0 && array[j] > v)
    {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = v;

    for (int i = 0; i < N; i++)
    {
      (i == N - 1) ? cout << array[i] : cout << array[i] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int N;
  cin >> N;

  int array[1000];
  for (int i = 0; i < N; i++)
  {
    cin >> array[i];
  }

  insertion_sort(N, array);

  return 0;
}
