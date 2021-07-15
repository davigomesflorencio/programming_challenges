#include <bits/stdc++.h>

using namespace std;

/**
 *
 * 345. Reverse Vowels of a String
 * https://leetcode.com/problems/reverse-vowels-of-a-string/
 *
 **/

class Solution
{
public:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'A' || c == 'e' ||
                c == 'E' || c == 'i' || c == 'I' ||
                c == 'o' || c == 'O' || c == 'u' ||
                c == 'U');
    }

    string reverseVowels(string s)
    {
        int start = 0;
        int end = s.size() - 1;

        while (start < end)
        {

            if (isVowel(s[start]))
            {

                if (isVowel(s[end]))
                {
                    char r = s[end];
                    s[end] = s[start];
                    s[start] = r;
                    start++;
                    end--;
                }
                else
                {
                    end--;
                }
            }
            else
            {
                start++;
            }
        }
        return s;
    }
};