// 백준 31836

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);

    int n;
    vector<int> a, b;

    cin >> n;
    if(n == 2) {
        cout << "1\n1\n1\n2\n";
        return 0;
    }

    for(int i = n; i > 1; i -= 3) {
        a.push_back(i);
        b.push_back(i - 1);
        b.push_back(i - 2);
        if(i - 3 == 2) {
            a.push_back(1);
            b.push_back(2);
            break;
        }
    }

    cout << a.size() << "\n";
    for(int i : a) cout << i << " ";
    cout << "\n" << b.size() << "\n";
    for(int i : b) cout << i << " ";

    return 0;
}