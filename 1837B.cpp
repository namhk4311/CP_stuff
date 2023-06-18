#include <bits/stdc++.h>
using namespace std;

void answer(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1, cur = 1;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[i - 1]) cur = 1;
            else cur++;
            ans = max(ans, cur);
        }
        cout << ans + 1 << endl;
    }    
}

int main()
{
    int t; cin >> t;
    while (t--){
        int length, cnt = 1, cnt_ = cnt, result = 0; cin >> length;
        string s; cin >> s;
        int i = 0;
        while (i < length){
            //cout << i << endl;
            if (s[i] == '<' && s[i - 1] == '>' && i > 0) {
                cnt = 1;
                if (cnt == cnt_){
                    while (cnt_ == cnt){
                        ++cnt;
                    }
                }
                result = max(cnt, result);
            }
            else if (s[i] == '>' && s[i - 1] == '<' && i > 0){
                cnt = 1;
                
                if (cnt == cnt_){
                    while (cnt_ == cnt){
                        ++cnt;
                    }
                }
                result = max(cnt, result);
            }
            else {
                ++cnt;
                result = max(cnt, result); 
            }
            cnt_ = cnt;
            ++i;
        }
        cout << result << endl;
    }
    return 0;
}