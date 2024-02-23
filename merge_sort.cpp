#include <bits/stdc++.h>
using namespace std;

vector<int> v{5,2,-2, 0 , 44, 3};

void merge(int l , int m , int r){
    int i , j , k;
    int n1 = m-l+1;
    int n2 = r - m;

    vector<int> left(n1), right(n2);
    for(i = 0 ; i < n1; i++){
        left[i] = v[l+i];
    }
    for(j = 0 ; j < n2; j++){
        right[j] = v[m+1+j];
    }
    i = 0 ; j = 0 ; k = l;

    while(i < n1 && j < n2){
        if(left[i] <= right[j])
            v[k++] = left[i++];
        else
            v[k++] = right[j++];
    }
    while(i < n1)
        v[k++] = left[i++];
    while(j < n2)
        v[k++] = right[j++];

}


void mergeSort(int i , int  j ){
    if(i >= j )return;

    int m = (i + j )/2;
    mergeSort(i, m);
    mergeSort(m+1, j);
    merge(i , m , j);

}


int main()
{

    mergeSort(0 , v.size()-1);
    for(auto i : v)cout << i << " ";
}
