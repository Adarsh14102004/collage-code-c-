//Murthal Parantha
#include <iostream>
using namespace std;

bool canCook(int p, int ranks[], int l, int time){
    int total = 0;

    for(int i=0;i<l;i++){
        int r = ranks[i];
        int t = 0, j = 1;

        while(true){
            t += j * r;
            if(t > time) break;
            total++;
            j++;
            if(total >= p) return true;
        }
    }

    return false;
}

int main(){
    int p;
    cin>>p;

    int l;
    cin>>l;

    int ranks[50];
    for(int i=0;i<l;i++){
        cin>>ranks[i];
    }

    int low = 0, high = 1e7, ans = 0;

    while(low <= high){
        int mid = (low + high)/2;

        if(canCook(p, ranks, l, mid)){
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout<<ans;
}