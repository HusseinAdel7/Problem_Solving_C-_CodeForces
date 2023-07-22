# include  < iostream > 
using namespace std;
void main()
{
	int x;
	cout << " enter the number " << "\n";
	cin >> x;
	cout << "\n";
	for (int i = 1; i <= 12; i++)
		cout << x << " * " << i << " = " << x*i << "\n";
}