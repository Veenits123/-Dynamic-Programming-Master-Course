#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int max_profit(int a[],int beg,int end,int year){
	if (beg>end) return 0;
	
	int profit_1=a[beg]*year+max_profit(a,beg+1,end,year+1);
	int profit_2=a[end]*year+max_profit(a,beg,end-1,year+1);
	
	return max(profit_1,profit_2);
}

int32_t main(){
	
	ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	int n;cin>>n;
	int a[n];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}	
	cout<<max_profit(a,1,n,1);

	return 0;
}