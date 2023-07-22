# include < iostream > 
using namespace std;
void main()
{
	char S, Q;
	double A, B, D, X=0, Y=0, Z=0;
	cout << " enter the expression \n";
	cin >> A >> S >> B >> Q >> D;
	X = A+B;
	Y =A-B;
	Z =A*B;
	if (A == A&&B == B&&S == 43 && Q == 61 && X == D || A == A &&B == B && S == 45 && Q == 61 && Y == D || A == A&&B == B&&S == 42 && Q == 61 && Z == D)
		cout << " YES \n";
	else if (A == A&&B == B&&S == 43 && Q == 61 && X != D)
		cout << X << "\n";
	else if (A == A &&B == B && S == 45 && Q == 61 && Y != D)
		cout << Y << "\n";
	else if (A == A&&B == B&&S == 42 && Q == 61 && Z != D)
		cout <<  Z<< "\n";
}