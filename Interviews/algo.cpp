#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono; 

void swap(long long  *a, long long  *b)
{
	long long  temp = *a;
	*a = *b;
	*b = temp;
}


void printArray(long long  arr[], long long  size)
{
	long long  i;
	for (i=0; i < size; i++)
	{
        cout << arr[i] << " ";
    }
	cout << endl;
}

long long endPartition(long long arr[], long long low, long long high)
{
    long long pivot = arr[high]; 
    long long i = (low - 1); 
 
    for (long long j = low; j <= high - 1; j++) 
    {
        if (arr[j] <= pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

long long startPartition ( long long arr[],long long start ,long long end) {
    long long i = start + 1;
    //make the first element as pivot element
    long long piv = arr[start] ;            
    for(long long j =start + 1; j <= end ; j++ )  {
        if (arr[ j ] < piv) 
        {
            swap (arr[ i ],arr [ j ]);
            i ++;
        }
   }
   //Swap the pivot element in its proper place.
   swap (arr[start],arr[i-1] ) ;  
   //return the position of the pivot
   return i-1;                      
}

long long medianPartition ( long long  arr[] , long long start , long long end )
{
    long long random = start + rand( )%(end-start +1 ) ;
    swap(arr[random], arr[start]);      
    long long index = startPartition(arr,start ,end) ;

    while(index < (start + (end-start)/4) || index > (start + (3*(end-start))/4))
    {
         if(arr[index]==arr[(start+end)/2])
                break;
        if(index < (start + (end-start)/4))
            random = index + rand( )%(end-index +1 ) ;
        else
            random = start + rand( )%(index-start +1 ) ;
        swap ( arr[random] , arr[start]) ;       
        index = startPartition(arr,start ,end) ;
        
    }
    return index;
}
long long randomPartition(long long arr[],long long low, long long high)
{
    srand(time(NULL));
    //Generate the index of the array in a random manner
    long long random = low + rand() % (high - low);
    swap(arr[random], arr[high]);
    // Now continue with the normal end Partition
    return endPartition(arr, low, high);
}
void quickSort(long long  arr[], long long  l, long long  h,int choice)
{
    if(choice == 1)
    {
        if (l < h) {
        int p = randomPartition(arr, l, h);
        quickSort(arr, l, p - 1,choice);
        quickSort(arr, p + 1, h,choice);
        }
    }
    if(choice == 2)
    {
        if (l < h) {
        int p = startPartition(arr, l, h);
        quickSort(arr, l, p - 1,choice);
        quickSort(arr, p + 1, h,choice);
        }
    }
    if(choice == 3)
    {
        if (l < h) {
        int p = endPartition(arr, l, h);
        quickSort(arr, l, p - 1,choice);
        quickSort(arr, p + 1, h,choice);
        }
    }
    if(choice == 4)
    {
        if (l < h)
        {
            long long  p = medianPartition(arr, l, h);
            quickSort(arr, l, p - 1,choice);
            quickSort(arr, p + 1, h,choice);
        }
    }	
}

int main()
{
    long long number[] = {1000,10000,100000,1000000};
    long long r[] = {100,1000,100000,1000000};
    long long choice[] = {1,2,3,4};
	
    for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<3;j++)
        {
            for(int c = 0;c<4;c++)
            {
                long long n = number[i];
                long long arr[n];
                long long range = r[j];
                auto start = high_resolution_clock::now(); 
                for(long long i = 0;i<n;i++)
                {
                    arr[i] = ((rand() % (range - 0 + 1)) + 0);
                }
                quickSort(arr, 0, n-1,choice[c]);
                auto stop = high_resolution_clock::now(); 
                auto duration = duration_cast<microseconds>(stop - start); 
                cout << "| N = "<< n << " | R = " << r[j]<< "| Choice = " << choice[c] << "| Time taken " << duration.count() << endl ; 
                // printArray(arr, n);           
            }
        }
    }
	return 0;
}
