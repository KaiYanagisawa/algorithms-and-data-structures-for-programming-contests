#include <iostream>

using namespace std;

struct Card
{
  char suit;
  int value;
};

void bubble_sort(Card trump[], int N)
{
  for (int i = 0; i < N; i++)
    for (int j = N - 1; j > i; j--)
      if (trump[j - 1].value > trump[j].value)
        swap(trump[j - 1], trump[j]);
}

bool is_stable(Card trump[], Card trump2[], int N)
{
  for (int i = 0; i < N; i++)
    if (trump[i].suit != trump2[i].suit)
      return false;

  return true;
}

void selection_sort(Card trump[], int N)
{
  for (int i = 0; i < N; i++)
  {
    int min = i;
    for (int j = i; j < N; j++)
      if (trump[j].value < trump[min].value)
        min = j;
    if (min != i)
      swap(trump[i], trump[min]);
  }
}

int main()
{
  int N;
  cin >> N;

  Card trump[36], trump2[36];
  for (int i = 0; i < N; i++)
    cin >> trump[i].suit >> trump[i].value;

  for (int i = 0; i < N; i++)
    trump2[i] = trump[i];

  bubble_sort(trump, N);
  for (int i = 0; i < N; i++)
    cout << trump[i].suit << trump[i].value << ((i == N - 1) ? "\n" : " ");

  cout << "Stable" << endl;

  selection_sort(trump2, N);
  for (int i = 0; i < N; i++)
    cout << trump2[i].suit << trump2[i].value << ((i == N - 1) ? "\n" : " ");

  if (is_stable(trump, trump2, N))
    cout << "Stable" << endl;
  else
    cout << "Not stable" << endl;

  return 0;
}
