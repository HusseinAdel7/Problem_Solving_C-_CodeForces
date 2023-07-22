# include < iostream > 
using namespace std;
void main()
{
	int x, y;
	cout << " ener two number \n";
	cin >> x >> y;
	if (x > 0 && y > 0)
		cout << " Q1 \n";
	else if (x > 0 && y < 0)
		cout << " Q4 \n";
	else if (x < 0 && y > 0)
		cout << " Q2 \n";
	else
		cout << " Q3 \n";
}