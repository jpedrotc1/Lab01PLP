#include <iostream>


using namespace std;

int main(){

    int m,n,o,p;
    int maximumValue = 0;
    int maximumAux = 0;
    int x,y;

    cin >> m;
    cin >> n;
    cin >> o;
    cin >> p;

    for(int i = m; i <= n; i++){
        for(int j = o; j <= p; j++){
            maximumAux = (i*i) - (3 * j) + i;
            if(maximumAux > maximumValue){
                maximumValue = maximumAux;
                x = i;
                y = j;
            }
        }
    }

    cout << "(" << x << "," << y << ")" << endl;
    cout << maximumValue;


}
