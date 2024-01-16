
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(vector<int> &nums){
    int n = nums.size();
    int subset_ct = (1<<n);
    vector<vector<int>> subsets;
    for(int mask=0; mask<subset_ct; ++mask){
        vector<int> subset;
        for(int k=0; k<n; k++){
            if((mask &(1<<k))!=0){
                subset.push_back(nums[k]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;

    // Time Complexity : O(n*2^n)
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin>>v[i];
    }

    auto all_subsets = subsets(v);

    for(auto subset: all_subsets){
        for(int ele: subset){
            cout << ele << " ";
        }
        cout << endl;
    }


    

  
}



