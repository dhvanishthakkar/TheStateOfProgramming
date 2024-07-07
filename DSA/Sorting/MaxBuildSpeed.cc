/*
 * MaxBuildSpeed.cc
 *
 *  Created on: 07-Jul-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
 
// Function to generate array of pairs
void generateArrayofPairs(int n, vector<int>& speed,
                          vector<int>& efficiency,
                          vector<pair<int, int> >& arr)
{
 
    for (int i = 0; i < n; i++) {
 
        arr[i] = { efficiency[i], speed[i] };
    }
 
    sort(arr.rbegin(), arr.rend());
    return;
}
 
/*  Description : 
 *      Function to find the maximum product of worker speeds
 *      and their minimum efficiency.
 */
int maximizePerformance(vector<int>& speed, int K,
                        vector<int>& efficiency)
{
 
    int n = speed.size();
    vector<pair<int, int> > arr(n);
 
    // Function to generate
    // sorted array of pairs
    generateArrayofPairs(n, speed,
                         efficiency, arr);
 
    // Initialize priority queue
    priority_queue<int, vector<int>,
                   greater<int> >
        pq;
 
    // Initialize ans and sumofspeed
    int ans = 0;
    int SumOfSpeed = 0;
 
    // Traversing the arr of pairs
    for (auto& it : arr) {
 
        int e = it.first;
        int s = it.second;
 
        // Updating sum of speed
        SumOfSpeed += s;
 
        // Pushing in priority queue
        pq.push(s);
 
        // If team consists of more than
        // K workers
        if (pq.size() > K) {
 
            int temp = pq.top();
            SumOfSpeed -= temp;
            pq.pop();
        }
 
        // Taking the maximum performance
        // that can be formed
        ans = max(ans, SumOfSpeed * e);
    }
 
    // Finally return the ans
    return ans;
}
 
// Driver Code
int main()
{
    // Given Input
    vector<int> speed = { 2, 10, 3, 1, 5, 8 };
    vector<int> efficiency = { 5, 4, 3, 9, 7, 2 };
    int K = 2;
 
    // Function Call
    cout << maximizePerformance(
        speed, K, efficiency);
}
