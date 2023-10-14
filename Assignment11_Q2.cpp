/*WAP to implement bubble short using function tamplate */
#include<iostream>
using namespace std;
template <typename T>
void bubbleShort(T arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
int intArray[]={65,32,23,12,21,11,98};
double doubleArray[]={3.14,1.23,2.369,0.159,0.357,1.258}