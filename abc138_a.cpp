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
    lli a;
    string s;
    cin >> a >> s;

    if (a >= 3200) {
        cout << s << endl;
    } else {
        cout << "red" << endl;
    }
    return 0;
}
