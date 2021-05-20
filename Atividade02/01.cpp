#include <iostream>
  
#include <bits/stdc++.h>

using namespace std;


/**
 * 
 * 744. Encontre a menor letra maior que o alvo
 * 
 **/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto j = lower_bound(letters.begin(),letters.end(),target);
        return letters[j-letters.begin()];

    }
};

