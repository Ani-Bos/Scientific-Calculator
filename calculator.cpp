// Aniket Bose
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll factorial( ll a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return a * factorial(a - 1);
    }
}

ll sum(ll a , ll b){
    return a + b;
}

ll difference( ll a , ll b){
    if(a>b){
        return a - b;
    }

    else{
        return b - a;
    }
}

ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

float squareRoot(int number, int precision)
{
    int start = 0, end = number;
    int mid;

    float ans;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid == number)
        {
            ans = mid;
            break;
        }
        if (mid * mid < number)
        {
            start = mid + 1;
            ans = mid;
        }

        else
        {
            end = mid - 1;
        }
    }

    float increment = 0.1;
    for (int i = 0; i < precision; i++)
    {
        while (ans * ans <= number)
        {
            ans += increment;
        }

        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}

ll modulo(ll a , ll b){
    return a % b;
}

ll multiply(ll a , ll b){
    return a * b;
}

ll divide(ll a , ll b){
    return a / b;
}
double sine(double a){
    return sin(a);
}

double cosine(double a)
{
    return cos(a);
}
double tangent(double a)
{
    return tan(a);
}
double inverseSine(double x)
{
    return asin(x);
}
double inverseCosine(double x)
{
    return acos(x);
}
double inverseTan(double x)
{
    return atan(x);
}
double hyperbolicSine(double x)
{
    return sinh(x);
}
double hyperbolicCosine(double x)
{
    return cosh(x);
}
double hyperbolicTangent(double x)
{
    return tanh(x);
}

double value10(double d)
{
    return log10(d);
}


