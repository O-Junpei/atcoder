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

long charCounter(string sentence, char character) {
    return count(sentence.cbegin(), sentence.cend(), character);
}

int main() {

    string S;
    cin >> S;

//    vector<bool > blocks(S.size());
//
//    for (int i = 0; i < S.size(): ++i) {
//
//    }

    lli zero = charCounter(S, '1');
    lli one = charCounter(S, '0');

    if (zero > one) {
        cout << one * 2<< endl;
    } else {
        cout << zero * 2<< endl;
    }

    return 0;
}
