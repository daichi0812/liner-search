/* n個の数値の中に0が含まれるかどうかを判定する */
// 線形探索の練習

#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> a(11000);

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a.at(i);
    }

    bool res = false;
    for(int i = 0; i < n; i++){
        if(a.at(i) == 0){
            res = true;
        }
    }

    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;
}