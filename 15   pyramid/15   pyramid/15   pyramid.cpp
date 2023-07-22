# include < iostream > 
using namespace std;
void main()
{
	int x;
	cout << " enter number \n";
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << "\n"; 
	}
}