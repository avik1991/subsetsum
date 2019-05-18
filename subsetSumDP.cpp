#include <iostream> 
#include<stdio.h>
using namespace std; 
  
bool subSum(int n,int k,int arr[]){
    bool DPTable[n+1][k+1];

    for (int i = 0; i <=n; i++)
    {
        DPTable[i][0]=true;
    }

    for (int i = 1; i <=k; i++)
    {
        DPTable[0][i]=false;
    }
    
    for (int i = 0; i <= n; i++) 
     { 
       for (int j = 0; j <= k; j++) 
          printf ("%4d", DPTable[i][j]); 
       printf("\n"); 
     }

  printf("\n"); 
        
              for(int i=1;i<=n;i++){ 

                  for (int j = 1; j <=k; j++)
                    {
                        if(j<arr[i-1])
                            DPTable[i][j]=DPTable[i-1][j];
                        
                        if(j>=arr[i-1])
                            DPTable[i][j]=(DPTable[i-1][j]||DPTable[i-1][j-arr[i-1]]);

                    }
                 }
        
    
for (int i = 0; i <= n; i++) 
     { 
       for (int j = 0; j <= k; j++) 
          printf ("%4d", DPTable[i][j]); 
       printf("\n"); 
     }

      return DPTable[n][k];
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

