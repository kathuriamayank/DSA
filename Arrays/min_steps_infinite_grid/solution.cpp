int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count(0);
    for(int i=1; i<A.size(); i++)
    {
        int x1=A[i-1];
        int y1=B[i-1];
        int x2=A[i];
        int y2=B[i];
        int x=abs(x2-x1);
        int y=abs(y2-y1);
        count+=max(x,y);
    }
    return count;
}
