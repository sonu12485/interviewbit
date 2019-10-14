vector<int> Solution::flip(string A)
{

    int start, end, s, e, max, count, flag, temp;
    max = 0;
    count = 0;
    flag = 0;
    temp = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '0')
            temp = 1;

        if (A[i] == '0' && flag == 0)
        {
            start = i;
            end = i;
            count++;
            flag = 1;
        }
        else if (A[i] == '0' && flag == 1)
        {
            end = i;
            count++;
        }
        else if (A[i] == '1' && flag == 1)
        {
            end = i;
            count--;
        }

        if (count > max)
        {
            max = count;
            s = start;
            e = end;
        }

        if (count < 0)
        {
            flag = 0;
            count = 0;
        }
    }

    vector<int> ans;

    if (temp != 0)
    {
        ans.push_back(s + 1);
        ans.push_back(e + 1);
    }

    return ans;
}
