#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <array>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <cassert>
#include <utility>
#include <functional>

using namespace std;
using lli = long long int;
using ll = long long;

int abc123_c() {
    lli N;
    cin >> N;

    vector<ll> T(5);
    for (int i = 0; i < 5; ++i) {
        cin >> T[i];
    }

    ll min = *min_element(T.begin(), T.end());

    lli answer = (N - 1) / min + 1;

    cout << answer + 4 << endl;
    return 0;
}
