#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void root_finder (double a,double b,double c);
void advance_calculator();

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
        cout<<"enter the a,b,c: ";
        cin >> a >> b >> c; 
        root_finder(a,b,c);
        break;

    case 3:
        advance_calculator();
        break;
    }

    return 0;
}


void root_finder (double a,double b,double c) {
        double  delta;
        double result1;
        double result2;
        if(a == 0 && b == 0){
            cout<< "IMPOSSIBLE"<<"\n";
            cout<<"thanks for choosing us!";
        }
        else if(a == 0){
            result1   = (-c / b);
            cout << fixed << setprecision(3) << result1<<"\n";
            cout<<"thanks for choosing us!";

        }else if (b==0)
        {
            if(-c/a < 0){
                cout<< "IMPOSSIBLE"<<"\n";
                cout<<"thanks for choosing us!";
            }else if (-c/a == 0)
            {
                cout << 0.00<<"\n";
                cout<<"thanks for choosing us!";
            }else{
                result1 = sqrt(-c/a);
                result2 = -(sqrt(-c/a));
                if (result1 > result2) {
                    cout << fixed << setprecision(3) << result2 << " ";
                    cout << fixed << setprecision(3) << result1<<"\n";
                    cout<<"thanks for choosing us!";

                }else{
                    cout << fixed << setprecision(3) << result1 << " ";
                    cout << fixed << setprecision(3) << result2<<"\n";
                    cout<<"thanks for choosing us!";
            }
            }
            
            
        }
        
        else {
        delta = pow(b,2) - 4 * a * c;

        if (delta < 0) {
            cout<<"IMPOSSIBLE"<<"\n";
            cout<<"thanks for choosing us!";
        } else if ( delta == 0){
            result1 = -b / (2.0 * a);
            cout << fixed << setprecision(3) << result1<<"\n";
            cout<<"thanks for choosing us!";

        }else
        {
            result1 = ((-b + sqrt(delta)) / (2 * a));
            result2 = ((-b - sqrt(delta)) / (2 * a));

            if (result1 > result2) {
                cout << fixed << setprecision(3) << result2 << " ";
                cout << fixed << setprecision(3) << result1<<"\n";
                cout<<"thanks for choosing us!";

            }else{
                cout << fixed << setprecision(3) << result1 << " ";
                cout << fixed << setprecision(3) << result2<<"\n";
                cout<<"thanks for choosing us!";
            }

        }
        
    }

    
}

void advance_calculator(){
    cout<<"---Menu---\n";
    cout<<"what do you want to do?\n\n";
    cout<<"1)GCD(Greatest Common Divisor).\n";
    cout<<"2)LCM(Least Common Multiple).\n";
    cout<<"3)choose k from n.\n";

    int n;
     do
    {
        cin >> n;
    } while (n <= 0 || n >= 4);
    switch (n)
    {
    case 1:{
    cout<<"enter two number you want: ";
    int a,b; cin>>a>>b;
       while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
        }
        cout<<"GCD is: "<<a<<"\n";
        cout<<"thanks for choosing us!";
        break;
    }
    case 2:{
    cout<<"enter two number you want: ";
    int a,b;
    cin>>a>>b;
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
        }
        cout<<"LCM is: "<<a*b/x<<"\n";
        cout<<"thanks for choosing us!";
        break;
    }
    case 3:{
        cout<<"first enter the k then enter the n: ";
        int n,k;
        cin>>k>>n;

    if (k > n - k)
        k = n - k;

    long long result = 1;
    for (int i = 1; i <= k; i++) {
        result = result * (n - i + 1) / i;
    }
    cout<<"the answer: "<<result<<"\n";
    cout<<"thanks for choosing us!";
        break;
    }
    }
}