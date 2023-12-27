#include <bits/stdc++.h>

using namespace std;
 

int printUncommon(int arr1[], int arr2[], int n1, int n2)
{
 

    int i = 0, j = 0, k = 0;
    int count = 0;

    while (i < n1 && j < n2) {
 

        // If not common, print smaller

        if (arr1[i] < arr2[j]) {

            count++;

            i++;

            k++;

        }

        else if (arr2[j] < arr1[i]) {

            count++;

            k++;

            j++;

        }
 

        // Skip common element

        else {

            i++;

            j++;

        }

    }
 

    // printing remaining elements

    while (i < n1) {

        count++;

        i++;

        k++;

    }

    while (j < n2) {

       count++;

        j++;

        k++;

    }
    return count;
}
 
// Driver code

int main()
{

    int arr1[] = {10, 20, 30};

    int arr2[] = {20, 25, 30, 40, 50};
 

    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 

    cout<<printUncommon(arr1, arr2, n1, n2);
    
 

    return 0;
}