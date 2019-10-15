int Solution::solve(vector<int> &A)
{

    sort(A.begin(), A.end());

    reverse(A.begin(), A.end());

    int flag = -1, temp = INT_MIN;

    for (long long i = 0; i < A.size(); i++)
    {
        if (A[i] == temp)
            continue;

        if (A[i] == i)
        {
            flag = 1;
            break;
        }

        temp = A[i];
    }

    return flag;
}
