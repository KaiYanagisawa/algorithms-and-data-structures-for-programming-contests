#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> prices(n);

  for (int i = 0; i < n; i++)
    cin >> prices[i];

  int max_price = -1000000000;
  int min_price = prices[0];

  for (int i = 1; i < n; i++)
  {
    max_price = max(max_price, prices[i] - min_price);
    min_price = min(min_price, prices[i]);
  }

  cout << max_price << "\n";

  return 0;
}
