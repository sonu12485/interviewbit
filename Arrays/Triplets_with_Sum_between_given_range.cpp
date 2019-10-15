int Solution::solve(vector<string> &A)
{
    vector<float> num;

    for (int i = 0; i < A.size(); i++)
    {
        num.push_back(stof(A[i]));
    }

    float a, b, c, sum;

    int i = 0, flag = 0;
    a = num[i];
    i++;
    b = num[i];
    i++;
    c = num[i];

    while (i < num.size())
    {
        sum = a + b + c;

        if (sum >= 1.0 && sum <= 2.0)
        {
            flag = 1;
            break;
        }
        else
        {
            if (sum < 1.0)
            {
                if (a <= b && a <= c)
                {
                    i++;
                    a = num[i];
                }
                else if (b <= a && b <= c)
                {
                    i++;
                    b = num[i];
                }
                else
                {
                    i++;
                    c = num[i];
                }
            }
            else if (sum > 2.0)
            {
                if (a >= b && a >= c)
                {
                    i++;
                    a = num[i];
                }
                else if (b >= a && b >= c)
                {
                    i++;
                    b = num[i];
                }
                else
                {
                    i++;
                    c = num[i];
                }
            }
        }
    }

    return flag;
}
