# include < iostream > 
using namespace std;
void main()
{
	int x;
	cout << " enter number \n";
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		for (int k = x; k >= i; k--)
		{
			cout << " *";
		}
		cout << endl;
	}
}