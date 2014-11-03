#include <iostream>

class Solution {
public:
  int reverse(int x) {
    int r = 0;
    while(x%10 || x>=10 || x<=-10) {
      r =  r*10;
      r += x%10;
      x =  x/10;
    }
    return r;
  }
};

int main(void) {
  int i = 0;
  std::cin >> i;
  Solution s;
  std::cout << s.reverse(i) << std::endl;
  return 0;
}
