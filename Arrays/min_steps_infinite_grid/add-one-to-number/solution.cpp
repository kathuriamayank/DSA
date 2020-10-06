vector<int> Solution::plusOne(vector<int> &A)
{

    int zeroPrefixIndex(0);
    while (A[zeroPrefixIndex] == 0 and zeroPrefixIndex < A.size())
    {
        zeroPrefixIndex++;
    }

    if (zeroPrefixIndex == A.size())
        return {1};

    std::vector<int> result(A.size() - zeroPrefixIndex);
    int sum = 0, carry = 0;
    int pos = A.size() - zeroPrefixIndex - 1;
    int ct(1);
    for (int j = A.size() - 1; j >= zeroPrefixIndex; j--)
    {
        if (ct == 1)
            sum = A[j] + carry + 1;
        else
            sum = A[j] + carry;
        ct++;
        result[pos--] = sum % 10;
        carry = sum / 10;
    }

    if (carry)
        result.insert(result.begin(), carry);

    return result;
}
