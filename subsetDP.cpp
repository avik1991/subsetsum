#include <iostream> 
using namespace std; 
  
bool subSum(int n,int k,int arr[]){
    bool DPTable[n][k];

    for(int i=0;i<n;i++){
        for (int j = 0; j < k; j++)
        {
            int sum=0;
           for(int p=0;p<=i;p++){
               sum=sum+arr[p];
           }
           if (sum==j+1)
             DPTable[i][j]= true;
           else
            DPTable[i][j]= false;

            
        }
        
    }
    for(int i=0;i<n;i++){

            if (DPTable[i][k-1]==true){
                return true;
            }

    }
      return false;
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

