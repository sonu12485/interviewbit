vector<vector<int>> Solution::generateMatrix(int A)
{
    vector<vector<int>> a(A, vector<int>(A, 0));

    int top = 0, bottom = A - 1, left = 0, right = A - 1, count = 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right && top <= bottom; i++)
        {
            a[top][i] = count;
            count++;
        }
        top++;
        for (int i = top; i <= bottom && left <= right; i++)
        {
            a[i][right] = count;
            count++;
        }
        right--;
        for (int i = right; i >= left && top <= bottom; i--)
        {
            a[bottom][i] = count;
            count++;
        }
        bottom--;
        for (int i = bottom; i >= top && left <= right; i--)
        {
            a[i][left] = count;
            count++;
        }
        left++;
    }

    return a;
}
