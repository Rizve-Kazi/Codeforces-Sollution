#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    for (int i = n + 1; i <= 9999; i++) { 
        string s = to_string(i);

        if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3]) {
            if (s[1] != s[2] && s[1] != s[3]) {
                if (s[2] != s[3]) {
                    ans = i;
                    break; 
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
