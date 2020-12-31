#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
    double kp, kk, q;
    int n;
    cout << "kp = "; cin >> kp;
    cout << "kk = "; cin >> kk;
    cout << "n = "; cin >> n;
    double dk = (kk - kp) / n;
    double k = kp;
    while (k <= kk)
    {
        q = z(2 * k + 1) - pow(z(2 * k + 1), 2);
        cout << k << " " << z << endl;
        k += dk;
    }
    return 0;
}
double z(const double x)
{
    if (abs(x) >= 1)
        return (cos(x) + 1) / ((pow(sin(x), 2) + exp(x)));
    else
    {
        double S = 0;
        int j = 0;
        double a = 1;
        S = a;
        do
        {
            j++;
            double R = -x / (((j - 2) * (j - 1) * j) * exp(x));
            a *= R;
            S += a;
        } while (j < 7);
        return S;
    }
}