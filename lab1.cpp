#include<iostream>
using namespace std;
int main() {
    int n, m, a[105], b[105];
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for(int j = 1; j <= m; ++j) {
        b[j] = lower_bound(a + 1, a + n + 1, j) - (a + 1);
    }
    cout << *max_element(b + 1, b + m + 1) << endl;
    return 0;
}
// 这个程序的意思是，对于每一个数字j在1到m之间，我们都要找出有多少个数比它小。然后输出最大的那个数。
// 但是如果用C++标准库函数lower_bound和upper_bound来实现会更简单些。
/*
#include <algorithm>
using namespace std;
int main(){
	int n=6, m=4;
	int a[]={3,2,7,8,9,1};
	sort(a, a+n); // 先将a中的元素进 
}