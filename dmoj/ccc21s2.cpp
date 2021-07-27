#include <bits/stdc++.h>
using namespace std;

int main(){
    int M, N, K;
    cin >> M;
    cin >> N;
    cin >> K;
    string op;
    int *Row = new int[M];
    int *Col = new int[N];
    cin.ignore();
    for(int i=0; i<M; i++) Row[i] = 0;
    for(int i=0; i<N; i++) Col[i] = 0;

    for(int i=0; i<K; i++){
        getline(cin, op);
        char t = op[0];
        int num = stoi(op.substr(2));
        if (t == 'R'){
            Row[num-1]++;
        }
        else {
            Col[num-1]++;
        }
    }

    int nR=0, nC=0;
    for(int i=0; i<M; i++){
        if(Row[i] % 2 == 1) nR++;
    }
    for(int i=0; i<N; i++){
        if(Col[i] % 2== 1) nC++;
    }
    int count = nR * N + nC * M - 2 * nR * nC;
    cout << count << endl;
}