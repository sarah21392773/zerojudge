#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=0;
    while(cin >> n){

        int m[n+2],num=0;        //用圍牆戰略
        m[0]=10001;
        m[n+1]=10001;

        for(int i=1;i<n+1;i++){
            cin >> m[i];
        }

        for(int i=1;i<n+1;i++){
            if(m[i]>=m[i-1]){
                if(m[i]==m[i-1]){
                    m[i-1]=m[i-2];
                    if(m[i]!=m[i+1]&&i!=n&&m[i]>m[i-1]){
                        num++;
                    }
                }
                else{
                    if(m[i]>m[i+1]){
                        num++;
                    }
                }
            }
        }

        cout << num << endl;
    }
    return 0;

}