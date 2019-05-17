#include <iostream> 
using namespace std; 
  
bool subSum(int n,int k,int arr[]){
    cout<<"\nset :{";
    for(int i=0;i<n;i++)
        cout<<" "<<arr[i];
    cout<<"}\n";
    cout<< "k:"<<k<<" n:"<<n<<"\n";

    if(k==0)
        return true;
    if(n==0 && k!=0)
        return false;

    if(arr[n-1]>k)
       return subSum(n-1,k,arr);
    else
    {
        return (subSum(n-1,k-arr[n-1],arr)|| subSum(n-1,k,arr));
    }
}

int main(int argc, char** argv) 
{ 
    cout << "You have entered " << argc 
         << " arguments:" << "\n"; 

    int K=atoi(argv[1] );
    int n=atoi( argv[2] );
    cout <<"K:" <<K << "\n";
    cout <<"number of elements in set :" <<argv[2] << "\n";
    int arr[n];

    cout <<"set : {";
    int j=0;
    for (int i = 3; i < argc; i++) {
        //cout << argv[i] << " "; 
        arr[j]=atoi( argv[i] );
        cout << arr[j] << " "; 
        j++;
    }
    cout <<"}\n";

    bool result=subSum(n,K,arr);
    if (result==true)
    {
        /* code */
        cout<<"found \n";
    }
    else
    {
        cout<<"not found\n";
    }
    
    
    return 0; 
}

