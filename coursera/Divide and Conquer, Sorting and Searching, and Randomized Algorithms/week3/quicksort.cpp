#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

long int quicksort(int * A, int n, int m);
int partition(int * A, int n, int p);
void swap(int * A, int i, int j);
int choosepivot(int * A, int n, int m);
int findmedian(int *A, int n, int median);

#define PIVOT_METHOD 2

int main()
{
    cout<<"** Quick Sort Program ** \n";
    
    /* Read Input array */
    ifstream InFile("QuickSort.txt");
    std::vector<int> A;
    int count;

    if(InFile) {
	int val;
	while(InFile >> val){
	  A.push_back(val);
	}
      }
    count = A.size();

    for(int i=count-3;i<count;i++)
      cout<<A[i]<<endl;

    int B[count];
    for(int i=0;i<count;i++)
      B[i]=A[i];

    /* Quicksort */
    long int comp = quicksort(B, count, PIVOT_METHOD);
    
    for(int i=0;i<count;i++)
      cout<<B[i]<<endl;

    cout<<"Comparisons = "<<comp<<endl;
    
    InFile.close();
    cout << " ** done ** \n";
    return 0;
}

long int quicksort(int * A, int n, int m)
{
  int p=0, np=0;
  long int comparisons=0;
  if(n==0 || n==1){
    return 0;
  }
  else {
    p = choosepivot(A,n,m);
    np = partition(A,n,p);
    comparisons=n-1;
    comparisons+= quicksort(&A[0], np, m);
    comparisons+= quicksort(&A[np+1], n-np-1, m);    
  }
  return comparisons;
}

int partition(int * A, int n, int p)
{
  int i, j;
  for(i=1,j=1; j<n; j++) {
    if (A[j]<p){
      swap(A,i,j);
      i++;
    }
  }
  swap(A,0,i-1);
  //cout<<"n="<<n<<endl;
  return i-1;
}

void swap(int * A, int i, int j)
{
  int temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}

int choosepivot(int * A, int n, int m)
{
  if (m==0){        //First Element as Pivot
    return A[0];
  }
  else if (m==1){ //Last Element as Pivot
    swap(A,0,n-1);
    return A[0];
  }
  else if (m==2){ //Median Element as Pivot

    //Find Middle
    int middle=0;
    if (n==0 || n==1 || n==2){
      middle = 0;
    }
    else if(n%2==1){
      middle = n/2;
    }
    else{
      middle = n/2-1;
    }
 
    //Find Median
    int n_median = findmedian(A,n,middle);

    //swam median with first element
    swap(A,0,n_median);
    return A[0];
  }
}

int findmedian(int *A, int n, int middle)
{
  int B[3];
  B[0] = A[0];
  B[1] = A[middle];
  B[2] = A[n-1];

  quicksort(B,3,0);

  if(B[1]==A[0])
    return 0;
  else if (B[1]==A[n-1])
    return n-1;
  else
    return middle;
}
