#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
vl ans{};

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  ans.reserve(n);
  auto num = 1;
  while (0 < (n--)) {
    auto is_add = true;
    for (auto i = 1; i <= 10; ++i) {
      int x;
      cin >> x;

      if (x != (i - 1) % 5 + 1) {
        is_add = false;
      }
    }

    if (is_add) {
      ans.push_back(num);
    }

    ++num;
  }

  for (const auto& x : ans) {
    cout << x << '\n';
  }

  return 0;
}