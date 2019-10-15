#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int memo[1000];
//memoization
int fib(int n){
	if (n==0) return 0;
	if (n==1) return 1;
	if (memo[n]!=-1){
		return memo[n];
	}
	int ans=fib(n-1)+fib(n-2);
	memo[n]=ans;
	return ans;
}
//bottom-up
int fib_b(int n){
	int dp[1001]={0};

	dp[0]=0;
	dp[1]=1;

	for (int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}

	return dp[n];
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
	for (int i=0;i<=n;i++){
		memo[i]=-1;
	}
	//cout<<fib(n);
	cout<<fib_b(n);
	
	return 0;
}