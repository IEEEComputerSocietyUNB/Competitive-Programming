#include<bits/stdc++.h>

using namespace std;

int main() {
    int codigo, quant;
    cin >> codigo >> quant;
switch(codigo) {
	case 1:
	   cout << fixed << setprecision(2) << "Total: R$ " << 4.00*quant << endl;
	   break;
	case 2:
	   cout << fixed << setprecision(2) << "Total: R$ " << 4.50*quant << endl;
	   break;
	case 3:
	   cout << fixed << setprecision(2) << "Total: R$ " << 5.00*quant << endl;
	   break;
	case 4:
	   cout << fixed << setprecision(2) << "Total: R$ " << 2.00*quant << endl;
	   break;
	case 5:
	   cout << fixed << setprecision(2) << "Total: R$ " << 1.50*quant << endl;
	   break;
	default:
	   cout << "Digite um código de 1 a 5" << endl;
	   break;
	}	   
    return 0;
}

//Optei por resolver por switch, mas daria pra usar ifs e if elses também 
