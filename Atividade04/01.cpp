#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

/**
 *
 * 1405. Longest Happy String
 *
 **/

typedef pair<int, int> pi;

class Solution {
public:
  string longestDiverseString(int a, int b, int c) {
    string s = "";
    int last = -1, letter_index, tam;
    int count[] = {a, b, c};
    while (true) {
      letter_index = -1;
      last = -1;
      tam = s.size();
      if (tam > 1 && s.at(tam - 2) == s.at(tam - 1)) {
        last = s.at(tam - 1) - 'a';
      }
      if (last != 0 and count[0] > 0) {
        letter_index = 0;
        // cout << "recebeu 0 ";
      }
      if (last != 1 and count[1] > 0 and
          (letter_index == -1 || count[1] > count[0])) {
        letter_index = 1;

        // cout << " recebeu 1 ";
      }
      if (last != 2 and count[2] > 0 and
          (letter_index == -1 || count[2] > max(count[0], count[1]))) {
        letter_index = 2;

        // cout << " recebeu 2 ";
      }
      // cout << "letter_index " << letter_index << endl;
      if (letter_index == 0) {
        s += "a";
        count[0] -= 1;
        // cout << "a inserido -> " << s << endl;
      } else if (letter_index == 1) {
        s += "b";
        count[1] -= 1;
        // cout << "b inserido -> " << s << endl;
      } else if (letter_index == 2) {
        s += "c";
        count[2] -= 1;
        // cout << "c inserido -> " << s << endl;
      }

      if ((count[0] == 0 and count[1] == 0) ||
          (count[0] == 0 and count[2] == 0) ||
          (count[1] == 0 and count[2] == 0)) {
        char last_char = s.at(s.size() - 1);
        if (count[0] >= 2 and last != 'a') {
          s += "aa";
        } else if (count[0] == 1 and last != 'a') {
          s += "a";
        }

        if (count[1] >= 2 and last != 'b') {
          s += "bb";
        } else if (count[1] == 1 and last != 'b') {
          s += "b";
        }

        if (count[2] >= 2 and last != 'c') {
          s += "cc";
        } else if (count[2] == 1 and last != 'c') {
          s += "c";
        }

        break;
      }
    }
    // cout << s.at(s.size() - 1) << endl;
    return s;
  }
};

int main() {
  Solution so;
  string a = so.longestDiverseString(2, 2, 1);
  cout << a << endl;
  return 0;
}