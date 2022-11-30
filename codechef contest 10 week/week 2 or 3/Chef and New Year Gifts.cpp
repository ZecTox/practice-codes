/*
Problem
Chef wants to give his friends Alice and Bob some gift on the occasion of new year!

He visits a gift shop with nn gifts placed in row. The i^{th}i 
th
  gift has a price p_ip 
i
​
 . Chef doesn't want to give the same gift to both his friends. Yet he wants the gifts to be as equal as possible, in other words he wants the absolute difference between the prices of both gifts to be as less as possible.

Help Chef in determining the least absolute difference in prices of the gifts given to Alice and Bob.

Input Format
First line of the input contains a single integer TT, the number of test cases. The description of each test case follows.
The first line of each test case contains a single integer nn.
The next line contains nn space-separated integers, i^{th}i 
th
  of them denoting the price of the i^{th}i 
th
  gift.
Output Format
For each test case, print the minimum absolute difference in both the gifts in a separate line.


input: 
3
5
1 2 2 7 8
4
9 1 6 4
2
8 9

output: 
0
2
1

*/

#include <bits/stdc++.h>
using namespace std;
int findMinDiff(int arr[], int n)
{

	int diff = INT_MAX;

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (abs(arr[i] - arr[j]) < diff)
				diff = abs(arr[i] - arr[j]);

	return diff;
}

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--){
    int a;
    cin >> a;
    int array[a];
    for(int i=0; i<a; i++){
        cin >> array[i];
    }
	cout << findMinDiff(array, a) << endl;
    }
    return 0;
} 
