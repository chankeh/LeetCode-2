// Author: github.com/lzl124631x
// Time: O(1)
// Space: O(1)
// The maximum number is 2^31 - 1, around 10^9, ie. has 10 digits.
// So the next number of it is at most 9*9*10=810, which has 3 digits.
// So the number of digits will drop significantly to less than 4 digits.
class Solution {
public:
  bool isHappy(int n) {
    unordered_set<int> s;
    while (n != 1 && !s.count(n)) {
      s.insert(n);
      int next = 0;
      while (n) {
        next += pow(n % 10, 2);
        n /= 10;
      }
      n = next;
    }
    return n == 1;
  }
};