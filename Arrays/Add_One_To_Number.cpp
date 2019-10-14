vector<int> Solution::plusOne(vector<int> &A)
{

    A.insert(A.begin(), 0);

    int count = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] < 9)
        {
            A[i] = A[i] + 1;
            break;
        }
        else
        {
            A[i] = 0;
        }
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)
            count++;
        else
            break;
    }

    A.erase(A.begin(), A.begin() + count);

    return A;
}
