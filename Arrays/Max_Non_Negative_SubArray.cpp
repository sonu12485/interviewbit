vector<int> Solution::maxset(vector<int> &A)
{
    long long start = 0, end = 0, max = 0, sum = 0, mstart = 0, mend = 0, length = 0, mlength = 0, flag = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] >= 0)
        {
            flag = 1;
            sum = sum + A[i];
            end = i;
            length++;

            if (sum > max)
            {
                max = sum;
                mstart = start;
                mend = end;
            }
            else if (sum == max)
            {
                if (length > mlength)
                {
                    max = sum;
                    mstart = start;
                    mend = end;
                }
            }

            if (length > mlength)
                mlength = length;
        }
        else
        {
            start = i + 1;
            sum = 0;
            length = 0;
        }
    }

    vector<int> res(A.cbegin() + mstart, A.cbegin() + mend + 1);
    vector<int> temp;

    if (flag == 0)
    {
        return temp;
    }
    else
    {
        return res;
    }
}
