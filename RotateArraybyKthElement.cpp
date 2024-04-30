#include<bits/stdc++.h>

using namespace std;

vector<int> rotate(int nums[], int n, int k) {

  if (k > n)

      k = k % n;

  vector<int> ans(n);

  for (int i = 0; i < k; i++) {

      ans[i] = nums[n - k + i];

  }

  int index = 0;

  for (int i = k; i < n; i++) {

      ans[i] = nums[index++];

  }

  return ans;

}

int main()

{

  int Array[] = { 1, 2, 3, 4, 5 };

  int N = sizeof(Array) / sizeof(Array[0]);

  int K = 2;

  vector<int> ans = rotate(Array, N, K);

  for (int i = 0; i < N; ++i) {

      cout << ans[i] << ' ';

  }

}
