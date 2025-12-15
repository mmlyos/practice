#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void root_finder (double a,
        double b,
        double c);

int main()
{
    cout << "---Menu---" << endl;
    cout << "1)Simple calculator" << endl;
    cout << "2)Root finder" << endl;
    cout << "3)Advanced calculator" << endl;
    int n;

    do
    {
        cin >> n;
    } while (n <= 0 || n >= 4);
    switch (n)
    {
    case 1:
    //Poorya
        break;

    case 2:
        double a,b,c;
        cin >> a >> b >> c; 
        root_finder(a,b,c);
        break;

    case 3:
    //Mohammad
        break;
    }

    return 0;
}


void root_finder (double a,
        double b,
        double c) {
        double  delta;
        double result1;
        double result2;
        if(a == 0 && b == 0){
            cout<< "IMPOSSIBLE";
        }
        else if(a == 0){
            result1   = (-c / b);
            cout << fixed << setprecision(3) << result1;

        }else if (b==0)
        {
            if(-c/a < 0){
                cout<< "IMPOSSIBLE";
            }else if (-c/a == 0)
            {
                cout << 0.00;
            }else{
                result1 = sqrt(-c/a);
                result2 = -(sqrt(-c/a));
                if (result1 > result2) {
                    cout << fixed << setprecision(3) << result2 << " ";
                    cout << fixed << setprecision(3) << result1;

                }else{
                    cout << fixed << setprecision(3) << result1 << " ";
                    cout << fixed << setprecision(3) << result2;
            }
            }
            
            
        }
        
        else {
        delta = pow(b,2) - 4 * a * c;

        if (delta < 0) {
            cout<<"IMPOSSIBLE";
        } else if ( delta == 0){
            result1 = -b / (2.0 * a);
            cout << fixed << setprecision(3) << result1;

        }else
        {
            result1 = ((-b + sqrt(delta)) / (2 * a));
            result2 = ((-b - sqrt(delta)) / (2 * a));

            if (result1 > result2) {
                cout << fixed << setprecision(3) << result2 << " ";
                cout << fixed << setprecision(3) << result1;

            }else{
                cout << fixed << setprecision(3) << result1 << " ";
                cout << fixed << setprecision(3) << result2;
            }

        }
        
    }

    
}

