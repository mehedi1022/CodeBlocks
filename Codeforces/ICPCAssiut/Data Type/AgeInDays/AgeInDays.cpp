#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, years, months, days;
    cin >> n;
    years = n / 365;
    months = (n % 365) / 30;
    days = ((n % 365) % 30);

    cout << years << " " << "years" << endl;
    cout << months << " " << "months" << endl;
    cout << days << " " << "days" << endl;
    return 0;
}  