# include < iostream>
using namespace std;
void main()
{
	char x;
	int y, z;
	cout << " enter equation\n";
	cin >> y >> x >> z;
	if (y > z && x == 62 || y<z &&x ==60 || y==z && x==61 )
		cout << " right \n";
	if (y < z && x == 62 || y>z &&x == 60 )
		cout << " wong \n";




}