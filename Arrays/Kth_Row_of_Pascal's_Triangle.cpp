vector<int> Solution::getRow(int A)
{
    vector<int> a;

    int c = 1, n = A + 1;

    for (int i = 0; i <= A; i++)
    {
        if (i == 0)
            a.push_back(c);
        else
        {
            c = c * (n - i) / i;
            a.push_back(c);
        }
    }

    return a;
}
