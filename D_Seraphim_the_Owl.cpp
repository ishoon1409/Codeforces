    #include <bits/stdc++.h>
    using namespace std;

    /*
    ######   #####    ##  ##    ###      ###    ##   ##           ####       ###    ### ###   ##  ##   #####    # #####  ######  ###  ###   ###    
    ##    ##   ##   ##  ##   ## ##    ## ##   ###  ##            ##       ## ##    ## ##    ##  ##  ### ###  ## ## ##    ##     ##  ##   ## ##   
    ##    ##        ##  ##  ##   ##  ##   ##  #### ##            ##      ##   ##   ####     ##  ##  ##   ##     ##       ##      ####   ##   ##  
    ##     #####    ######  ##   ##  ##   ##  #######            ##      ##   ##   ###      ######  ##   ##     ##       ##       ##    ##   ##  
    ##         ##   ##  ##  #######  #######  ## ####            ##      #######   ####     ##  ##  ##   ##     ##       ##       ##    #######  
    ##    ##   ##   ##  ##  ##   ##  ##   ##  ##  ###            ##  ##  ##   ##   ## ##    ##  ##  ### ###     ##       ##       ##    ##   ##  
    ######   #####    ##  ##  ##   ##  ##   ##  ##   ##           #######  ##   ##  ### ###   ##  ##   #####     ####    ######    ####   ##   ##  
                                                                                                                                                    
    */

    int main(){
        int t;
        cin>>t;
        while(t--){
            long long n,m;
            cin>>n>>m;
            vector<long long> a(n),b(n);
            for(long long i=0;i<n;i++){
                cin>>a[i];
            }
            for(long long i=0;i<n;i++){
                cin>>b[i];
            }
            long long ans=LLONG_MAX;
            long long s=0;
            for(long long i=n-1;i>=0;i--){
                if(i+1<=m){
                    ans=min(ans,s+a[i]);
                }
                s+=min(a[i],b[i]);
            }
            cout<<ans<<endl;
        }
        return 0;
    }