#include<bits/stdc++.h>
#include <sys/time.h>


using namespace std;
struct timeval  tv1, tv2;
int main()
{

	int minSize = pow(2,8);

	int maxSize = pow(2,17);

	int total = maxSize;

	for (int size =minSize; size<maxSize; size*=2)
	{

		   int RUNS = total/size;

		    //initialise arrays

		    int A[size], B[size], C[size], D[size];
		    
		   gettimeofday(&tv1, NULL);
		    
		    for(int i=0;i< size;i++)
			{
				A[i] = B[i] + C[i]*D[i];
			}
		    
		   gettimeofday(&tv2, NULL); 
		    double boss= (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 + (double) (tv2.tv_sec - tv1.tv_sec);
			cout<<boss<<endl;
      	    double throughput = (sizeof(long long) * 2 * total)/boss;
		    
		   cout<<size<<" "<<throughput<<endl<<endl;

	 }
return 0;
}
