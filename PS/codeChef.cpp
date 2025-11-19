// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,x,y;
// 	cin>>t;
// 	while(t--){
// 	    cin>>x>>y;
// 	    if(y>= 3*x) cout<<"Yes"<<endl;
// 	    else cout<<"No"<<endl;
// 	};


// 	// code chef exam 


// int main1() {
// 	// your code goes here
// 	int t;
	
// 	// cin>>t;
	
// 	// for(int i =0;i<t; i++){
// 	//     int x,y,z;
// 	//     cin>>x>>y>>z;
// 	//    // int total;
// 	//    // total= x * y;
// 	//    // int z = (z/total) * 100;
	    
// 	//     if(z> x*y/2) cout<<"Yes"<<endl;
// 	//     else cout<<"No"<<endl;
	    
// 	// }
// 	// 	for(int i =0;i<t; i++){
// 	//     int x,y,z;
// 	//     cin>>x>>y>>z;
// 	//    // int total;
// 	//    // total= x * y;
// 	//    // int z = (z/total) * 100;
	    
// 	//     if(z> x*y/2) cout<<"Yes"<<endl;
// 	//     else cout<<"No"<<endl;
	    
// 	// }

// //}
//   //? Rating 400
//   	int t;
// 	cin>>t;
	
// 	for(int i=0; i<t; i++){
// 	    int x,y;
// 	    cin>>x>>y;
// 	    if(x<y){
// 	        cout<<"First"<<endl;
// 	    }else if(x>y){
// 	        cout<<"Second"<<endl;
// 	    }else{
// 	        cout<<"Any"<<endl;
// 	    }
	 
	   
// 	}

// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	
	while(t--){
	    long long n;
	    cin>>n;
	    int maxSpeed =0;
	    int winner = -1;
	    
	    for(int i =1; i<=n; i++){
	        int d,t;
	        cin>>d>>t;
	        int presentSpeed = d/t;
	        if(presentSpeed>maxSpeed){
	            maxSpeed =presentSpeed;
	            winner =i;
	        }
	        cout<<winner<<endl;
	    }
	}

}

