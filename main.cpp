#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float A,B,C,avg;
    cin >> A >> B >> C;
    avg = ((A * 2)+(B * 3)+(C * 5)) /10;
    cout << "MEDIA = " << fixed << setprecision(1) << avg <<endl;

    return 0;
}
