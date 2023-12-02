#include <iostream>

using namespace std;

struct card
{
  char suit;
  int value;
};

void bubble_sort(card trump[], int N)
{
  for (int i = 0; i < N; i++)
   for (int j = N - 1; j > i; j--)
   {
    if (trump[j - 1].value > trump[j].value)
      swap(trump[j - 1], trump[j]);
   }
}

int main()
{
  int N;
  cin >> N;

  card trump[36], trump2[36];
  for (int i = 0; i < N; i++)
    cin >> trump[i].suit >> trump[i].value;

  for (int i = 0; i < N; i++)
    trump2[i] = trump[i];

  bubble_sort(trump, N);
  for (int i = 0; i < N; i++)
    cout << trump[i].suit << trump[i].value << " ";
}
