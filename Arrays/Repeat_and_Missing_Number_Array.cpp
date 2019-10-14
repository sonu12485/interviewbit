vector<int> Solution::repeatedNumber(const vector<int> &A)
{

    long long n = A.size();
    long long diff = 0;
    long long diffSq = 0;

    for (long long i = 0; i < n; i++)
    {
        diff = diff + ((i + 1) - (long long)A[i]);
        diffSq = diffSq + (((i + 1) * (i + 1)) - ((long long)A[i] * (long long)A[i]));
    }

    int a = (int)((diffSq - (diff * diff)) / (2 * diff));
    int b = (int)(diff + a);

    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);

    return ans;
}
