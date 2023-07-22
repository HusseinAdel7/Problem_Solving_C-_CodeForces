# include< iostream > 
using namespace std;
void main()
{
	int x;
	cout << " Enter The Number \n";
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		if (i % 2 == 0)
			cout << i << "\n";
	}
}

