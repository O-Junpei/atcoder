#include <iostream>
#include<math.h>
#include <vector>

using namespace std;


int abc088_b() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    // 昇順
    //sort(a.begin(), a.end());

    // 降順
    sort(a.begin(), a.end(), [](const int x, const int y) { return x > y; });
    // sort(a.begin(), a.end(), greater<int>());  // a[0:N] を大きい順にソート

    int alice = 0;
    int bob = 0;
    for (int j = 0; j < N; ++j) {
        if (j % 2 == 0) {
            alice += a[j];
        } else {
            bob += a[j];
        }
    }

    cout << alice - bob << endl;
}
