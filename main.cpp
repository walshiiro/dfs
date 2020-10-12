#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a,b,n,m;
bool c[1000][1000];//c[i][j]=true khi co canh noi i va j
bool vi[1000];//danh dau diem da dc di qua hay chua
void dfs(int u)
{
    vi[u]=true;
    cout<<u<<" ";
    for(int i=1;i<=n;i++)
    {
        if(c[i][u]&& !vi[i])
            dfs(i);

    }
}
int main()
{
    memset(c,false,sizeof(c));
    memset(vi,false,sizeof(vi));
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        c[a][b]=true;
        c[b][a]=true;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    dfs(1);
}