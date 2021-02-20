#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];
    int ans[3];
    for (int i = 0; i < 3; ++i)
    {
        cin.getline(s, sizeof(s) / sizeof(s[0]));
        int cnt = 0;
        for (int j = 0; s[j]!=0 ; ++j)
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')  cnt+= 1;
        }
        ans[i]= cnt;
        
    }
    cout << ((ans[0]==5 && ans[1]==7 && ans[2]==5) ? "YES" : "NO") << endl;
    return 0;
}
