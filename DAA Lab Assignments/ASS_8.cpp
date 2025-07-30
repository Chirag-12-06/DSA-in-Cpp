#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

// Given two strings txt and pat of size N and M, where N > M. String txt and pat represent the text and pattern respectively.
// The task is to print all indexes of occurrences of pattern string in the text string. Use one-based indexing while returning the indices.
// Input:  txt = “THIS IS A TEST TEXT”, pat = “TEST”
// Output: Pattern found at index 10
// Input:  txt=  “AABAACAADAABAABA” , pat =  “AABA”
// Output: Pattern found at index 0, Pattern found at index 9, Pattern found at index 12.
// Write a program to implement the following string matching algorithms:

// 1) Rabin-Karp string matching algorithm
// int Hash(string &s)
// {
//     int val = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         val = val * 10 + (s[i] - 'A' + 1);
//     }
//     return val;
// }
// int Hash(char c)
// {
//     return c - 'A' + 1;
// }
// void Rabin_Karp(string txt, string pat)
// {
//     int val = Hash(pat), m = txt.size(), n = pat.size();
//     string s;
//     for (int i = 0; i < n; i++)
//     {
//         s += txt[i];
//     }
//     int curr = Hash(s);
//     if (curr == val)
//     {
//         cout << "Pattern found at index 1" << endl;
//     }
//     for (int i = 0; i < m - n; i++)
//     {
//         curr = (curr - Hash(txt[i]) * pow(10, n - 1)) * 10 + Hash(txt[i + n]);
//         if (curr == val)
//         {
//             cout << "Pattern found at index " << i + 2 << endl;
//         }
//     }
// }
// int main()
// {
//     // string txt="THISISATESTTEXT";
//     // string pat = "TEST" ;
//     string txt = "AABAACAADAABAABA";
//     string pat = "AABA";
//     Rabin_Karp(txt, pat);
// }

// 2) Knuth-Morris-Pratt (KMP) algorithm
// void Knuth_Morris_Pratt(string txt, string pat)
// {
//     vector<int> idx(pat.size());
//     int j = -1, i = 0;
//     idx[0] = -1;
//     for (int k = 1; k < pat.size(); k++)
//     {
//         int p = k - 1;
//         while (p >= 0)
//         {
//             if (pat[k] == pat[p])
//             {
//                 idx[k] = p;
//                 break;
//             }
//             else
//             {
//                 idx[k] = -1;
//             }
//             p--;
//         }
//     }
//     while (i < txt.size())
//     {
//         if (j == pat.size() - 2)
//         {
//             cout << "Pattern found at index " << i - j << endl;
//             j = -1;
//         }
//         if (txt[i] == pat[j + 1])
//         {
//             j++;
//         }
//         else if (j != -1)
//         {
//             j = idx[j];
//         }
//         i++;
//     }
// }
// int main()
// {
//     string txt = "THISISATESTTEXT";
//     string pat = "TEST";
//     // string txt = "AABAACAADAABAABA";
//     // string pat = "AABA";
//     Knuth_Morris_Pratt(txt, pat);
// }

