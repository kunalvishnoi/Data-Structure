#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i;j<n;j++)
	        {
	            int temp;
	            if(a[i]>a[j])
	            {
	                temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	            }
	        }
	    }
	    if(n%2!=0)
	    {
	        cout<<a[(n-1)/2]<<endl;
	    }
	    else 
	    {
	        int temp=n/2;
	        int sum=a[temp]+a[temp-1];
	        cout<<sum/2<<endl;
	    }
	    T--;
	}
	return 0;
}