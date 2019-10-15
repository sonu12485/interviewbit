int Solution::maximumGap(const vector<int> &A)
{

    int max = 0, temp, diff;

    vector<pair<int, int>> p;

    for (int i = 0; i < A.size(); i++)
    {
        pair<int, int> pair;
        pair.first = A[i];
        pair.second = i;

        p.push_back(pair);
    }

    sort(p.begin(), p.end());

    temp = p[0].second;
    for (int i = 1; i < p.size(); i++)
    {
        if (p[i].second >= temp)
        {
            diff = p[i].second - temp;
            if (diff > max)
                max = diff;
        }
        else
        {
            temp = p[i].second;
        }
    }

    return max;
}
