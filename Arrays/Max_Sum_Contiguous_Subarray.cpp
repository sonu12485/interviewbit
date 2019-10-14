int Solution::maxSubArray(const vector<int> &A)
{

    int max = A[0], sum = A[0];

    for (int i = 1; i < A.size(); i++)
    {
        sum = sum + A[i];

        if (A[i] > sum)
            sum = A[i];

        if (sum > max)
            max = sum;
    }

    return max;
}
