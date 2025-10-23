# DSA
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return b;
    }
    if(b == 0){
        return a;
    }
    b = b%a;
    return gcd(b,a);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map< int,vector<int>> m;
	    for(int i = 1; i<=n; i++){
	        int g = gcd(i,n);
	        m[g].push_back(i);
	    }
	    vector<vector<int>> v;
	    for(auto i : m){
	        v.push_back(i.second);
	    }
	    int nv = v.size();
	    for(int i = nv-1;i>=0;i--){
	        sort(v[i].begin(),v[i].end());
	        
	        for(auto j:v[i]){
	            cout<<j<<" ";
	        }
	    }
	    cout<<"\n";
	}
   
}
        
