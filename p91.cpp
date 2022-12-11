#include <iostream>
 
 using namespace std;

const  int n=10;

int main()
    int  a[ n];
    int  i,j,temp ,x;
    cout<<"enter" <<n << "elements :";
    cin>>x;
    cout<<"enter a number:";
    for (i=0;i<n;++i)
        cin>>a[i];
        
    for(i=1;i<n;++i)
    {
	    for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
			    temp=a[j];
			    a[j]=a[j+1];
			    a[j+1]=temp;
		    }  
  
    }
			
    cout<<"array after bubble sort:";
    for(i=0;i<n;++i)
        cout<<"  "<,a[j]











}
