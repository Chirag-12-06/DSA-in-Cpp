#include <iostream>
#include <string>
using namespace std;
//LCS of substring `X[0…m-1]` and `Y[0…n-1]`
int LCSLength(string X, string Y)
{
    int m = X.length(), n = Y.length();
    int curr[n + 1], prev[n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0) {
                curr[j] = 0;}
            else {
                // if the current character of `X` and `Y` matches
                if (X[i - 1] == Y[j - 1]) {
                    curr[j] = prev[j - 1] + 1;}
                // otherwise, if the current character of `X` and `Y` don't match
                else {
                    curr[j] = max(prev[j], curr[j - 1]);
                }}}
        // replace contents of the previous array with the current array
        for (int i = 0; i <= n; i++) {
            prev[i] = curr[i];
        }
    }
    return curr[n];
}
int main()
{
    string X = "XMJYAUZ", Y = "MZJAWXU";
    cout << "The length of the LCS is " << LCSLength(X, Y);
    return 0;
}
