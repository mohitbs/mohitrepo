#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

long int sort_countinv(int A[], int n);
long int merge_countsplitinv(int* B, int sizeB, int* C, int sizeC, int* D);

int main()
{
    cout<<"** Number of Inversions Program ** \n";
    long int numinversions=0;
    
    /* Read Input array */
    int count=100000;
    ifstream InFile;
    InFile.open("IntegerArray.txt");
    int A[count];       //allowed since C++11

    int a;
    for(a = 0; (a < count); a++)
      {
	InFile >> A[a];
	if (a<10)
	  {
	    cout << A[a]<<endl;
	  }
       }

    //Count number of inversions
    numinversions = sort_countinv(A,count);
    cout<<"\n Number of Inversions: "<<numinversions<<endl;
    
    InFile.close();
    cout << " ** done ** \n";
    return 0;
}

long int sort_countinv(int A[], int n)
{
  long int x=0, y=0, z=0;
  int *B = &A[0], *C = &A[n/2];
  int D[n];
    
  if (n==1 || n==0)
    {
      return 0;
    }
  else
    {
      x = sort_countinv(B, n/2);
      y = sort_countinv(C, n-(n/2));
      z = merge_countsplitinv(B, n/2, C, n-(n/2), D);
    }

  // Copy D (Sorted version of A) to A
  for (int i=0; i<n; i++)
    {
      A[i] = D[i];
    }
  
  // Count of Inversions
  return (x+y+z);
}

long int merge_countsplitinv(int* B, int sizeB, int* C, int sizeC, int* D)
{
  int k=0, i=0, j=0;
  long int countinv=0;
  
  for(k=0; k<(sizeB+sizeC); k++)
    {
      
      if (j==sizeC || (B[i] <= C[j] && i<sizeB))
	{
	  D[k] = B[i];
	  i++;
	}
      else if (i==sizeB || (C[j] < B[i] && j<sizeC))
     	{
	  D[k] = C[j];
	  countinv += (sizeB-i);
	  j++;
	}
       else
	{
	  cout<<"How did this reach here? k="<<k<<" i="<<i<<" j="<<j<<" B[i]="<<B[i]<<" C[j]= "<<C[j]<<" sizeB="<<sizeB<<" sizeC="<<sizeC<<endl;
	}
    }
  
  return countinv;
}
