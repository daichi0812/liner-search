#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> a(11000);   // 最大10000個なので余裕を持って11000に

int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> a.at(i);

    int findID = -1; // ここに見つかった場所を格納する（これ自体がフラグの役割を果たす）
    for(int i = 0; i < n; i++){
        if(a.at(i) == 0){   // 見つかったら
            findID = i;     // 場所を記録して
            break;          // break
        }
    }

    if(findID != -1) cout << findID << endl;
    else cout << "No" << endl;
}