vector<vector<int>> Solution::solve(int A)
{
    vector<vector<int>> a;

    for (int i = 0; i < A; i++)
    {
        vector<int> temp;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                temp.push_back(1);
            }
            else if (j > 0 && j < i)
            {
                temp.push_back(a[i - 1][j] + a[i - 1][j - 1]);
            }
            else if (j == i)
            {
                temp.push_back(a[i - 1][j - 1]);
            }
        }
        a.push_back(temp);
    }

    return a;
}
