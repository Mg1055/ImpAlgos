#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    if(n == 1)
    {    
        cout << "Move " << n << " disc from " << A << " to " << C << endl;
        return;
    }
    TOH(n-1,A,C,B);
    cout << "Move " << n << " disc from " << A << " to " << B << endl;
    TOH(n-1,B,A,C);
}

int main() {
	int n;
	char a,b,c;
	cin >> n >> a >> b >> c;
	TOH(n,a,b,c);
	return 0;
}