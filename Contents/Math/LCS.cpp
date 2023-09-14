#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    short lcs[2][1000];
    while (cin >> str1 >> str2)
    {
        lcs[0][0] = str1[0] == str2[0];
        for (int j=1; j<str2.length(); j++) lcs[0][j] = max(lcs[0][j-1], short{str1[0]==str2[j]});
        for (int i=1; i<str1.length(); i++)
        {
            bool r = i & 1;
            lcs[r][0] = max(lcs[r^1][0], short{str1[i]==str2[0]});
            for (int j=1; j<str2.length(); j++)
                lcs[r][j] = str1[i]==str2[j] ? lcs[r^1][j-1] + 1 : max(lcs[r^1][j], lcs[r][j-1]);
        }
        cout << lcs[(str1.length()-1)&1][str2.length()-1] << '\n';
    }
    return 0;
}
