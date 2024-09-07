// 見つかったら break するバージョン

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
            res = true; //見つかったら
            break;
        }
    }

    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;

}
/*この工夫を施したとしても計算量は変わらない。なぜなら計算量は最悪のケースを想定(0が最後にくる)するものであるから。*/