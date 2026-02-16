#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_element(vector<int> &v)
{
    if (v.empty())
    {
        return -1;
    }
    int n = v.size();
    int max = v[0];
    for (int i = 0; i < n; i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }
    return max;
}

int min_element(vector<int> &v)
{
    if (v.empty())
        return -1;
    int min = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (min > v[i])
        {
            min = v[i];
        }
    }
    return min;
}

void swapFunction(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

// Reverse the array
void reverArray(vector<int> &v)
{
    int l = 0;
    int r = v.size() - 1;

    while (l < r)
    {
        swap(v[l], v[r]);
        l++;
        r--;
    }
}
void print(vector<int> &v)
{
    int n = v.size();
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

void removeDuplicates(vector<int> &nums)
{
    int j = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[j])
        {
            cout << i << " " << j << " " << nums[i] << " " << nums[j] << " " << endl;
            nums.erase(nums.begin() + j);
            j++;
        }
    }

    cout << nums.size();
}

int main()
{
    vector<int> v1 = {23, 4, 66, 12, 34};
    // print(v1);
    // cout<<max_element(v1)<<" "<<min_element(v1)<<endl;
    // reverArray(v1);
    // print(v1);

    // int a = 45;
    // int b = 34;
    // swap(a,b);
    // swapFunction(a,b);
    // cout<<a<<" "<<b<<endl;
    vector<int> v2 = {0, 0, 1, 2, 3, 3};
    // removeDuplicates(v2);
    v2.erase(v2.begin() + 2);
    print(v2);
    return 0;
}