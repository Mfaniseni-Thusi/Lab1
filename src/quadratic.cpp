#include <iostream>
#include <complex>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    char ny;

    cout << "Press y to calculate or q to quit!" << endl;

    while(cin >> ny)
    {
        if(ny == 'y'){
            cout<<"enter the values"<<endl;
            int a,b,c;
            cin >> a;
            cin >> b;
            cin >> c;

            double prod1=4*a*c;
            double prod2=2*a;
            double power= pow (b, 2);
            double diff = power - prod1;


            if(diff<0)
            {
                complex<double> num(diff,0);
                complex<double> result= sqrt (num);
                double imagpart = result.imag();
                double top1= (-1*b)/ prod2;
                cout<< "x = "<<top1<< " + "<<imagpart/prod2<<"j"<<" or "<< "x ="<<top1<<" - "<<imagpart/prod2<<"j"<<endl;
            }

            else
            {
                double square=sqrt(diff);
                double sum=((-1*b)+square)/prod2;
                double dif=((-1*b)-square)/prod2;
                cout << "x = " << sum << " or " << dif << endl;
            }
            cout << "Press y to calculate again or q to quit!" << endl;
            cin >> ny;

            if(ny == 'q')
            {
                break;
            }
            break;

        } else if(ny == 'q'){
            break;
        }
    }
    return 0;
}
