int Solution::coverPoints(vector<int> &A, vector<int> &B)
{

    int a, b, c, d, steps = 0, d1, d2, maxd;

    a = A[0], b = B[0];
    for (int i = 1; i < A.size(); i++)
    {
        c = A[i], d = B[i];

        d1 = abs(a - c);
        d2 = abs(b - d);
        maxd = (d1 > d2) ? d1 : d2;

        steps = steps + abs(maxd);

        a = c;
        b = d;
    }

    return steps;
}
