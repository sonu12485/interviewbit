bool comp(int a, int b)
{
    string as = to_string(a);
    string bs = to_string(b);

    string sab = as + bs;
    string sba = bs + as;

    return sab.compare(sba) > 0 ? true : false;
}

string Solution::largestNumber(const vector<int> &A)
{
    vector<int> a;

    int flag = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != 0)
            flag = 1;
        a.push_back(A[i]);
    }

    string s = "";

    sort(a.begin(), a.end(), comp);

    for (int i = 0; i < a.size(); i++)
    {
        s = s + to_string(a[i]);
    }

    if (flag == 0)
    {
        string sz = "0";
        return sz;
    }
    else
    {
        return s;
    }
}
