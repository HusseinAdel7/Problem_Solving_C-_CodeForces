# include < iostream > 
using namespace std;
void main()
{
	int x;
	cout << " enter number \n";
	cin >> x;
	if (x% 2 != 0 && x % 3 != 0 || x == 2 || x == 3)
		cout << " YES \n";
	else
		cout << " NO \n";
}