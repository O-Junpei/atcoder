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


int main() {
    int N;
    cin >> N;

    vector<int> p(N);

    int counter = 0;
    for (int i = 1; i <= N; ++i) {
        int num;
        cin >> num;
        if (i != num) {
            ++counter;
        }
    }

    if (counter > 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}
