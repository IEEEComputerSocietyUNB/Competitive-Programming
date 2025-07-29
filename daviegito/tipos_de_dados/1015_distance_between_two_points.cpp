#include<bits/stdc++.h>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    double exp1 = pow((x2-x1), 2);
    double exp2 = pow((y2-y1), 2);
    double distance = sqrt(exp1 + exp2);
    cout << fixed << setprecision(4) << distance << endl;
    return 0;
}

//O pulo do gato aqui é lembrar da função sqrt pra raiz quadrada e pow para potência
