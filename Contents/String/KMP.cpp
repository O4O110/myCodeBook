#include <iostream>
using namespace std;

void KMP(string text, string pattern)
{
    int m = text.length();
    int n = pattern.length();
 
    // 如果模組沒東東
    if (n == 0)
    {
        cout << "The pattern occurs with shift 0";
        return;
    }
 
    // 如果文本的長度小於模組的長度
    if (m < n)
    {
        cout << "Pattern not found";
        return;
    }
 
    // next[i] 存儲下一個最佳部分匹配的索引
    int next[n + 1];
 
    for (int i = 0; i < n + 1; i++) {
        next[i] = 0;
    }
 
    for (int i = 1; i < n; i++)
    {
        int j = next[i];
 
        while (j > 0 && pattern[j] != pattern[i]) {
            j = next[j];
        }
 
        if (j > 0 || pattern[j] == pattern[i]) {
            next[i + 1] = j + 1;
        }
    }
 
    for (int i = 0, j = 0; i < m; i++)
    {
        if (text[i] == pattern[j])//一樣如果+1j下一個檢查
        {
            if (++j == n) {
                cout << "The pattern occurs with shift " << i - j + 1 << endl;
            }
        }
        else if (j > 0)
        {
            j = next[j];//把她休崩變回來
            i--;    // 還要回去啾啾
        }
    }
}
 
int main()
{
    string text = "ABCABAABCABAC";
    string pattern = "CAB";
 
    KMP(text, pattern);
 
    return 0;
}
