#include <iostream>
#include <vector>

using namespace std;
int main()
{
  int n;
  cin >> n;

  vector<int> prices(n);

  for (int i = 0; i < prices.size(); i++)
    cin >> prices[i];

  vector<int> maxes;
  // O(n^2)の計算をしているためメモリも実行時間もオーバーしてしまう
  for (int i = 0; i < prices.size() - 1; i++)
  {
    for (int j = i + 1; j < prices.size(); j++)
    {
      int subtraction = prices[j] - prices[i];
      maxes.push_back(subtraction);
    }
  }

  int max = maxes[0];
  for (int i = 1; i < maxes.size(); i++)
  {
    if (maxes[i] > max)
    {
      max = maxes[i];
    }
  }

  cout << max << "\n";

  return 0;
}
