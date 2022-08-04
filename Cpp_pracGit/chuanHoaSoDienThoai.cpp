#include <bits/stdc++.h>
using namespace std;
string standardizedPhoneNumber(string phoneNumber)
{
    string res;
    for (int i = 0; i < phoneNumber.size(); i++)
    {
        if (phoneNumber[i] >= '0' && phoneNumber[i] <= '9')
        {
            res += phoneNumber[i];
        }
    }
    if (res.size() == 9)
        res = '0' + res;
    else
    {
        res.erase(0, 2);
        res = '0' + res;
    }
    return res;
}
int sum(vector<int> a){
    int s = 0;
    for(int i = 0 ; i < a.size(); i++) s+= a[i];
    return s;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string phoneNumber;
        getline(cin, phoneNumber);
        cout << standardizedPhoneNumber(phoneNumber) << endl;
    }
    return 0;
}