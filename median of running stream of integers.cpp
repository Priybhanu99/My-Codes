#include<bits/stdc++.h> 
using namespace std; 
  
// function to calculate med of stream 
void printMedians(double arr[], int n) 
{ 
    // max heap to store the smaller half elements 
    priority_queue<double> left_half; 
  
    // min heap to store the greater half elements 
    priority_queue<double,vector<double>,greater<double> > right_half; 
  
    double med = arr[0]; 
    left_half.push(arr[0]); 
  
    cout << med << endl; 
  
    // reading elements of stream one by one 
    /*  At any time we try to make heaps balanced and 
        their sizes differ by at-most 1. If heaps are 
        balanced,then we declare median as average of 
        min_heap_right.top() and max_heap_left.top() 
        If heaps are unbalanced,then median is defined 
        as the top element of heap of larger size  */
    for (int i=1; i < n; i++) 
    { 
        double x = arr[i]; 
  
        // case1(left side heap has more elements) 
        if (left_half.size() > right_half.size()) 
        { 
            if (x < med) 
            { 
                right_half.push(left_half.top()); 
                left_half.pop(); 
                left_half.push(x); 
            } 
            else
                right_half.push(x); 
  
            med = (left_half.top() + right_half.top())/2.0; 
        } 
  
        // case2(both heaps are balanced) 
        else if (left_half.size()==right_half.size()) 
        { 
            if (x < med) 
            { 
                left_half.push(x); 
                med = (double)left_half.top(); 
            } 
            else
            { 
                right_half.push(x); 
                med = (double)right_half.top(); 
            } 
        } 
  
        // case3(right side heap has more elements) 
        else
        { 
            if (x > med) 
            { 
                left_half.push(right_half.top()); 
                right_half.pop(); 
                right_half.push(x); 
            } 
            else
                left_half.push(x); 
  
            med = (left_half.top() + right_half.top())/2.0; 
        } 
  
        cout << med << endl; 
    } 
} 
  
// Driver program to test above functions 
int main() 
{ 
    // stream of integers 
    double arr[] = {5, 15, 10, 20, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printMedians(arr, n); 
    return 0; 
} 