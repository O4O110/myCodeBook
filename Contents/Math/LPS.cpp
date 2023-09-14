#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int maxlen=0, l, r;
    for(int i=0; i<s.length(); i++){
        //奇
        int x = 0;
        while((s[i-x]==s[i+x]) && (i-x>=0) && (i+x<s.length())){//當找到一個中心點以其為中間然後左右兩邊咻咻比較
            x++;
        }
        x--;
        if(2*x+1 > maxlen){//只有第一次會max==後後面就追不到那女孩
            maxlen = 2*x+1;//最大的
            l = i-x;//計算頭頭
            r = i+x;//計算尾巴
        }
        //偶
        x = 0;
        while( (s[i-x]==s[i+1+x]) && (i-x>=0) && (i+1+x<s.length()) ){
            x++;
        }
        if(2*x > maxlen){
            maxlen = 2*x;
            l = i-x+1;
            r = i+x;
        }
    }
    cout << maxlen << '\n';
    cout << l+1 << ' ' << r+1 << '\n';

}
