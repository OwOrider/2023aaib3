int main() {
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b)
    {
        A.push_back(a);
        B.push_back(b);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0; i<A.size(); i++)
    {
       ans+=abs(A[i]-B[i]);
    }
    cout<<"加起來的答案是"<<ans;
}