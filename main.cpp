#include <iostream>
using namespace std;

int main() {
    int i=2, n=0, primo=1, secondo=1, terzo;
    cin>>n;
    if (n>=2){
        cout<< primo << endl;
        cout<< secondo << endl;
        for(;i<n;i++){
            terzo=primo+secondo;
            primo=secondo;
            secondo=terzo;
            cout<< terzo << endl;
        }
    } else {
        cout << "errore" << endl;
    }
   return 0;
}
