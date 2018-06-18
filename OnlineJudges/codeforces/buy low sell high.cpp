#include <bits/stdc++.h>

using namespace std;



int main()
{
            long long ans=0;
            int n,a;
           priority_queue <int>q;
           scanf("%d",&n);
           for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(!i || a<=-q.top()){q.push(-a);}
            else{
                ans+=a+q.top();
                q.pop();
                q.push(-a);q.push(-a);
            }
           }
           
           printf("%lld",ans);
           
           
                return 0;
}
