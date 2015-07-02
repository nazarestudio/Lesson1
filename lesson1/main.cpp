#include "iostream"
#include "cmath"

using namespace std;

int main ( int argc, char* argv[])

/*{
	cout << "Output 5-digit number line by line\nInput 5-digit number: ";
	int number;
	cin >> number;

	cout << "First number: " << number / 10000 << endl;
	cout << "Second numser: " << (number % 10000 - number %1000) /1000 << endl;
	cout << "Third number: " << (number % 1000 - number %100) /100 << endl;
	cout << "Fourth number: " << (number % 100 - number %10) /10 << endl;
	cout << "Fifth number: " << number %10 << endl;
	system ("pause");
	 return 0;
	 }*/
	//task 1_2 Èç ïÿòè îòäåëüíûõ ÷èñåë ñîáðàòü îäíî 5-òè çíà÷íîå
{
	 cout << endl;
	 cout << "task1_2, formed 5 digit number from 5 another numbers. " << endl;
	 cout << "Enter numbers:" << endl;
	 int a, b, c, d, e, r;
	 cout << "- 1st numer:";
	 cin >> a;
	 cout << "- 2nd numer:";
	 cin >> b;
	 cout << "- 3d numer:";
	 cin >> c;
	 cout << "- 4th numer:";
	 cin >> d;
	 cout << "- 5th numer:";
	 cin >> e;
	 r=a*10000+b*1000+c*100+d*10+e;
	 cout << "5 digit number:" << r << endl;
	 system ("pause");
	 return 0;
     
 }


//equestion
/*{
	double d, b, a, c, x1, x2; 
	cout << "ax^2+bx+c=0" << endl;
	cout << "enter a:";
	cin >> a; 
	cout<<"enter b:";
	cin>>b; 
	cout<< "enter c:";
	cin>>c; 
	d=b*b-4*a*c;
	cout<<"D="<< d << endl;
	if (d>0)
	{
      x1=(-b+sqrt(d))/2*a;
	  x2=(-b-sqrt(d))/2*a;
	  cout<< "x1=(-b+sqrt(d))/2a="<<x1<<endl;
	  cout<< "x2=(-b-sqrt(d))/2a="<<x2<<endl;
	}
	    else 
	         {
		      if (d==0)
		       {
			     x1=(-b+sqrt(d))/2*a;
			     cout<< "x=(-b+sqrt(d))/2a="<<x1<<endl;
		                                                }
		else 
		    {
		     if (d<0)
		       {
			    cout<<"equation without solutions"<<endl;
		                                                 }
		     }
	}

	system ("pause");
	return 0;
}*/