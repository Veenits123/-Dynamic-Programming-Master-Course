#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
const int inf= (int)1e9;

int memo[10001];

int red(int n){
	int q1=inf,q2=inf,q3=inf;
	if (n==1){
		return 0;
	}
	if (memo[n]!=-1){
		return memo[n];
	}
	if (n%3==0){
		 q3= 1+red(n/3);
	}
	if (n%2==0){
		q2= 1+red(n/2);
	}
	q1= 1+red(n-1);
	
	memo[n]=min({q1,q2,q3});
	//cout<<q2<<" ";
	return memo[n];

}

int redDP(int n){
	int dp[10001];

	dp[0]=0;  dp[1]=0;
	dp[2]=1;  dp[3]=1;

	for (int i=4;i<=n;i++){
		int q1=inf,q2=inf,q3=inf;

		if (i%3==0) q3=1+dp[i/3];
		if (i%2==0) q2=1+dp[i/2];
		q1=1+dp[i-1];

		dp[i]=min({q1,q2,q3});
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
	fill(memo,memo+n+1,-1);
	cout<<red(n);
	//cout<<redDP(n);
	
	return 0;
}