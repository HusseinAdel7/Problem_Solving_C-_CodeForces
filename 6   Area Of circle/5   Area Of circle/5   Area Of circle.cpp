# include< iostream > 
using namespace std;
void main()
{
	double reduis, area;
	cout << " Enter The Reduis Of  Circle \n";
	cin >> reduis;
	if (reduis <1 && reduis > 100)

		cout << " reduis should between 1 and 100" << " \n";

	else
	{
		area = 3.14* reduis * reduis;
		cout << " Area Of The Circle Equal " << " " << area << " \n ";
	}
}