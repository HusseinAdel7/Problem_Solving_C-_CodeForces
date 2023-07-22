# include < iostream > 
using namespace std;
void main()
{
	int e = 1,x;
	cout << " enter number \n";
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		for (int k = x; k >= i;k--)
		{
			cout << " ";
		}
		for (int c = 0; c < e; c++)
		{
			cout << "*";
		}
		cout << "\n";
		e += 2;
	}
}