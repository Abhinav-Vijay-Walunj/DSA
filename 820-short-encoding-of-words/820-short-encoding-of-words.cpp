class Solution {
public:
    int minimumLengthEncoding(vector<string>& ws) {
        int res=0;
        for (auto i = 0; i < ws.size(); ++i) reverse(ws[i].begin(), ws[i].end());
    sort(ws.begin(), ws.end());
    for (auto i = 0; i < ws.size() - 1; ++i) res += ws[i] == ws[i + 1].substr(0, ws[i].size()) ? 0 : ws[i].size() + 1;
    return res + ws[ws.size() - 1].size() + 1;
    }
};