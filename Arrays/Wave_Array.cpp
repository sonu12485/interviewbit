vector<int> Solution::wave(vector<int> &A)
{
    vector<int> wave;

    sort(A.begin(), A.end());

    int i, j;
    for (i = 0, j = 1; i < A.size() - 1; i = i + 2, j = j + 2)
    {
        wave.push_back(A[j]);
        wave.push_back(A[i]);
    }

    if (i < A.size())
    {
        wave.push_back(A[A.size() - 1]);
    }

    return wave;
}
