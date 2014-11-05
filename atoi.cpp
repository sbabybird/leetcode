#include <iostream>
using namespace std;

class Solution {
  public:
    int atoi(const char *str) {
      int r = 0;
      bool b = false;
      while(str!=NULL && *str !='\0') {
        char p = *str++;
        if (p == '-') {
          b = true;
          continue;
        }
        else if (p == '+') {
          continue;
        }
        else if (p<48 || p>57) {
          return 0;
        }
        else {
          r = r*10;
          r += p-48;
        }
      }
      return b ? r*-1 : r;
    }
};

int main(void) {
  char *str = new char[256];
  cin >> str;
  Solution s;
  cout << s.atoi(str) << endl;
  delete str;
  str = NULL;
  return 0;
}
