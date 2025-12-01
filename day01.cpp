// Day1. New Year and the Christmas Ornamen
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    double y,b,r;
    cin >> y;
    cin >> b;
    cin >> r;

    while (true)
    {
        if(b/(y+1) >= 1 && r/(y+2) >= 1){
            cout << 3*y + 3;
            break;
        }else{
            y--;
        }
    }
    
    return 0;
}