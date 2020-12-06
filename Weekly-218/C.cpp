
static auto fast = []() {ios_base::sync_with_stdio(false);cin.tie(nullptr);return 0;}();
typedef long long int lli;
#define M 1000000007
class Solution {
public:
    
    lli calcMul(lli mul, int m) {
        lli a = 1;
        for(int i = 0; i < m; ++i) {
            a = (a * 2) % M;
        }
        return (mul * a) % M;
    }
    
    int concatenatedBinary(int n) {
        lli ans = 0, mul = 1;

        for(int i = n; i >= 1; --i) {
            ans = (ans + ((i * mul) % M)) % M;
            mul = calcMul(mul, ((int)log2(i) + 1));
        }
        return ans;
    }
};
