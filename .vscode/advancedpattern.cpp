#include<iostream>
using namespace std;


int main(){
int n;
 cin>>n;
 int mid = (n/2)+1;
 
 
//pattern6
//swastik
//for(int i =1; i<=n; i++){
//	
//	//top line
//	if(i ==1){
//		cout<<"*";
//		for(int j =2; j<=n; j++){
//			if(j<mid){
//			cout<<" ";
//	     	}
//	     	else{
//	     		cout<<"*";
//			 }
//		}cout<<endl;
//	}
//	
//	//between top and middle
//	 if(i !=1 && i< mid){
//	 	for(int j =1; j<=n; j++){
//	 		if(j ==1 || j == mid){
//	 			cout<<"*";
//			 }
//	 		else{
//	 			cout<<" ";
//			 }
//		 }
//		 cout<<endl;
//	}
//	//middle line
//	if(i == mid){
//		for(int j =1; j<=n; j++){
//			cout<<"*";
//		}
//		cout<<endl;	
//	}
//	//between middle and botton
//	if(i>mid && i != n){
//		for(int j =1; j<=n; j++){
//	    	if( j == mid || j == n){
//			cout<<"*";
//		}
//		else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;	
//   }
//   //bottom line
//   if(i ==n){
//   	for(int j =1; j<=n-1; j++){
//   		if(j<=mid){
//   			cout<<"*";
//		   }
//		   else{
//		   	cout<<" ";
//		   }
//	   }
//	   cout<<"*";
//    }
//  }
//}

//pattern5
//for(int i =1; i<=n; i++){
//	if(i ==1){
//		cout<<"1"<<endl;
//	}
//	else if(i ==2){
//		cout<<"11"<<endl;
//	}
//	else if(i%2 == 1){
//		int temp =i;
//		for(int i =2; i<=temp+1; i++){
//		cout<<"1";
//	}
//	cout<<endl;
//	}
//	else{
//		cout<<"1";
//		for(int space =1; space<=i-2; space++){
//			cout<<"0";
//		}
//		cout<<"1";
//		cout<<endl;
//	}
//  }
//  return 0;
//}

//pattern4
//for(int i =1; i<=n; i++)
//{
//	if(i == 1 || i == n){
//		for(int star =1; star<=i; star++)
//			cout<<"*";
//		cout<<endl;
//	}
//		else{
//			cout<<"*";
//			for( int space =1; space<=i-2; space++)
//				cout<<" ";
//			cout<<"*";
//		cout<<endl;
//	}
//  }
//  return 0;
//}

//pattern3
//int main(){ 
//    int i,j,k=1;
//    int m[7][7]={0};
//    for(i=1;i<=7;i++)
//    {
//        for(j=1;j<=7;j++)
//            if(j==i || 8-i==j) 
//                m[i-1][j-1]=k;
//            if(i<4) k++;
//            else --k;
//
//    }
//    for(i=0;i<7;i++)
//    {
//        for(j=0;j<7;j++)
//        {
//            if(m[i][j]==0)
//                cout<<(" ");
//            else
//                cout<<m[i][j];
//        }
//        cout<<endl;
//    }
//    return 0;
//}
	
	
	
	
	
	
	//pattern2
	
//	for(int i=1; i<=n; i++){
//		for(int space =1; space<=i-1; space++){
//			cout<<" ";
//		}
//		for(int star =1; star<=; star++){
//			cout<<"*";
//		}
//		for(int space =1; space<=2*(n-i)-1; space++){
//			cout<<" ";
//		}
//		for(int star =0; star<=; star++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
	
	
	
	//pattern1
//	int n;
//	int l =3*n-2;
//	int m = (n-1)*4;
//	 cin>>n;
//	 for(int i =1; i<=n; i++){
//	 	for(int j =1; j<=n; j++){
//	 		if(i ==1)
//	 		cout<<j<<"";
//	 		else if(j ==n)
//	 		cout<<n++<<"";
//	 		else if(i == n)
//	 		cout<<l--<<"";
//	 		else if(j ==1)
//	 		cout<<m--<<"";
//	 		else
//	 		cout<<" ";
//	 		
//		 }
//		 cout<<endl;
//	 }
//	 return 0;
//}