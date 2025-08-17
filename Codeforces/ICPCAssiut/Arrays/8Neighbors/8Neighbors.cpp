#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, m, i, j, x, y, p, q;
cin >> n >> m;
// vector<vector<char>>matrix(n, vector<char>(m));
char matrix[n][m];
for(i = 0; i <n; i++){
    for(j = 0; j < m; j++){
        cin >> matrix[i][j];
    }
}
cin >> x >> y;
p = x - 1;
q = y - 1;
bool f = true;
for(i = 0; i <n; i++){
    for(j = 0; j < m; j++){
       if(matrix[p - 1][q] == '.' || matrix[p][q - 1] == '.' || matrix[p + 1][q] == '.' || matrix[p][q + 1] == '.' || matrix[p + 1][q - 1] == '.' || matrix[p - 1][q + 1] == '.' || matrix[p + 1][q + 1] == '.' || matrix[p - 1][q - 1] == '.'){
       f = false;
       }
    }
}
if(f == true){
    cout << "yes" << endl;
}else{
    cout << "no" << endl;
}
 
    return 0; 
}