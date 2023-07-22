# include < iostream > 
using namespace std;
void main()
{
	double x, y, z;
	cout << " Enter The Three Number \n";
	cin >> x>> y>>z;
	if (x < y && x < z)
		cout << x<<"\n";
	else	if (y < x && y < z)
			cout << y << "\n";
		else
			cout << z << "\n";
			
	if (x < y && x > z)
		cout << x << "\n";
	else	if (y < x && y >z)
		cout << y << "\n";
	else
		cout << z << "\n";

	if (x > y && x > z)
		cout << x << "\n";
	else	if (y > x && y > z)
		cout << y << "\n";
	else
		cout << z << "\n";

		
	}
