vector<vector<int>> Solution::diagonal(vector<vector<int>> &A)
{
    int n = 2 * A.size() - 1;

    vector<vector<int>> a(n, vector<int>(0, 0));

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A.size(); j++)
        {
            a[j + i].push_back(A[i][j]);
        }
    }

    return a;
}
