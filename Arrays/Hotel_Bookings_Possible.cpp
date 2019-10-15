bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K)
{
    vector<pair<int, int>> bookings;

    for (int i = 0; i < arrive.size(); i++)
    {
        pair<int, int> temp;

        temp.first = arrive[i];
        temp.second = 1;

        bookings.push_back(temp);

        temp.first = depart[i] - 1;
        temp.second = -1;

        bookings.push_back(temp);
    }

    sort(bookings.begin(), bookings.end(), comp);

    bool flag = true;

    for (int i = 0; i < bookings.size(); i++)
    {
        K = K - bookings[i].second;

        if (K < 0)
        {
            flag = false;
            break;
        }
    }

    return flag;
}
