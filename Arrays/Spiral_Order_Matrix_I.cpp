vector<int> Solution::spiralOrder(const vector<vector<int>> &A)
{
    vector<int> result;

    int rows = A.size();
    int cols = A[0].size();
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right && top <= bottom; i++)
        {
            result.push_back(A[top][i]);
        }
        top++;
        for (int i = top; i <= bottom && left <= right; i++)
        {
            result.push_back(A[i][right]);
        }
        right--;
        for (int i = right; i >= left && top <= bottom; i--)
        {
            result.push_back(A[bottom][i]);
        }
        bottom--;
        for (int i = bottom; i >= top && left <= right; i--)
        {
            result.push_back(A[i][left]);
        }
        left++;
    }

    return result;
}
