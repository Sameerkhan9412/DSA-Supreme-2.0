#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// ----------------------------------------------------
//     NEXT SMALLEST ELEMENT
// ----------------------------------------------------

vector<int>nextSmallestElement(int *arr,int size,vector<int> &ans){
    stack<int> st;
    st.push(-1);

    for(int i=size-1;i>=0;i--){
        int curr=arr[i];
        // answwer find kro currrent ke liye
        while(st.top()>=curr){
            st.pop();
        }

        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
}
// ----------------------------------------------------
//     PREV SMALLEST ELEMENT
// ----------------------------------------------------

vector<int>prevSmallestElement(int *arr,int size,vector<int> &ans){
    stack<int> st;
    st.push(-1);

    for(int i=0;i<=size-1;i++){
        int curr=arr[i];
        // answwer find kro currrent ke liye
        while(st.top()>=curr){
            st.pop();
        }

        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
}

int main(){
    int arr[5]={8,4,6,2,3};
    int size=5;
    cout<<"NEXT:"<<endl;
    vector<int> next(size);
    next=nextSmallestElement(arr,size,next);
    for(auto i:next){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"PREV:"<<endl;
    vector<int> prev(size);
    prev=prevSmallestElement(arr,size,prev);
    for(auto i:prev){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}

// rough work
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// ----------------------------------------------------
//     NEXT SMALLEST ELEMENT
// ----------------------------------------------------

vector<int>nextSmallestElement(int *arr,int size,vector<int> &ans){
    stack<int> st;
    st.push(-1);

    for(int i=size-1;i>=0;i--){
        int curr=arr[i];
        // answwer find kro currrent ke liye
        while(st.top()>=curr){
            st.pop();
        }

        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
}
// ----------------------------------------------------
//     PREV SMALLEST ELEMENT
// ----------------------------------------------------

vector<int>prevSmallestElement(int *arr,int size,vector<int> &ans){
    stack<int> st;
    st.push(-1);

    for(int i=0;i<=size-1;i++){
        int curr=arr[i];
        // answwer find kro currrent ke liye
        while(st.top()>=curr){
            st.pop();
        }

        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
}

int main(){
    int arr[5]={8,4,6,2,3};
    int size=5;
    cout<<"NEXT:"<<endl;
    vector<int> next(size);
    next=nextSmallestElement(arr,size,next);
    for(auto i:next){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"PREV:"<<endl;
    vector<int> prev(size);
    prev=prevSmallestElement(arr,size,prev);
    for(auto i:prev){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}

// rough work
class Solution {
public:
    // ----------------------------------------------------
    //     NEXT SMALLEST ELEMENT
    // ----------------------------------------------------

    vector<int>nextSmallestElement(vector<int> arr){
        vector<int> ans;
        stack<int> st;
        st.push(-1);

        for(int i=arr.size()-1;i>=0;i--){
            int curr=arr[i];
            // answwer find kro currrent ke liye
            while(!st.empty() && arr[st.top()]>=curr){
                st.pop();
            }

            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    // ----------------------------------------------------
    //     PREV SMALLEST ELEMENT
    // ----------------------------------------------------

    vector<int>prevSmallestElement(vector<int> arr){
        vector<int> ans;
        stack<int> st;
        st.push(-1);

        for(int i=0;i<=arr.size()-1;i++){
            int curr=arr[i];
            // answwer find kro currrent ke liye
            while(!st.empty() && arr[st.top()]>=curr){
                st.pop();
            }

            ans[i]=st.top();
            st.push(curr);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>next=nextSmallestElement(heights);
        vector<int>prev=prevSmallestElement(heights);
        vector<int> area(next.size());
        for(int i=0;i<next.size();i++){
            int width=next[i]-prev[i]-1;
            int length=heights[i];
            int currArea=width+length;
            area[i]=currArea;
        }
        int maxi=INT_MIN;
        for(int i=0;i<area.size();i++){
            maxi=max(maxi,area[i]);
        }
        return maxi;
    }
};