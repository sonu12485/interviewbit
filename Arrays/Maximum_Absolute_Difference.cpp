int Solution::maxArr(vector<int> &A)
{

    int max, temp;

    int l1 = A[0], h1 = A[0], li1 = 0, hi1 = 0;
    int l2 = A[0], h2 = A[0], li2 = 0, hi2 = 0;

    for (int i = 1; i < A.size(); i++)
    {
        if ((A[i] + i) >= h1)
        {
            h1 = A[i] + i;
            hi1 = i;
        }
        if ((A[i] + i) <= l1)
        {
            l1 = A[i] + i;
            li1 = i;
        }

        if ((A[i] - i) >= h2)
        {
            h2 = A[i] - i;
            hi2 = i;
        }
        if ((A[i] - i) <= l2)
        {
            l2 = A[i] - i;
            li2 = i;
        }
    }

    max = abs(A[hi1] - A[li1]) + abs(hi1 - li1);
    temp = abs(A[hi1] - A[li2]) + abs(hi1 - li2);
    if (temp > max)
        max = temp;
    temp = abs(A[hi2] - A[li1]) + abs(hi2 - li1);
    if (temp > max)
        max = temp;
    temp = abs(A[hi2] - A[li2]) + abs(hi2 - li2);
    if (temp > max)
        max = temp;

    return max;
}
