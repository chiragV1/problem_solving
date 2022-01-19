#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */
 bool ismagic(vector<int>& m){
     const int magic = 15;
     int rsum{};
    for(int r{} ; r<m.size();++r){
        rsum +=m[r];
        if(r %3!=2) continue;
        if(rsum !=magic) return false;
        rsum=0;
    } 
    
    int csum[3] ={0,0,0};
    
    for(int c{};c<m.size();++c){
        csum[c%3] += m[c];
    }
    if(csum[0]!=magic || csum[1] !=magic || csum[2]!= magic)
    return false;
    
     int lrsum = m[0] +m[4] +m[8];
     int rlsum = m[2] + m [4]+m[6];
     
     if(lrsum!=magic || rlsum!=magic)
     {
         return false;
     }
     
     return true;
    
 }

int transform(vector<int> & m , vector<int> & n){
    int total_cost {};
    for(int i;i<m.size();++i){
        total_cost +=abs(m[i]-n[i]);
    }
    
    return total_cost;
}


int formingMagicSquare(vector<vector<int>> s) {
    
    int Min_cost = INT16_MAX;
    vector<int> flat;
    for(auto & r :s){
        for(auto & c: r){
            flat.push_back(c);
        }
    } 
    
    vector<int> p = {0,1,2,3,4,5,6,7,8,9};
    
    while(next_permutation(p.begin(), p.end())){
        if(!ismagic(p)) continue;
        
        Min_cost=min(Min_cost , transform(flat, p));
}

   
   return Min_cost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        string s_row_temp_temp;
        getline(cin, s_row_temp_temp);

        vector<string> s_row_temp = split(rtrim(s_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int s_row_item = stoi(s_row_temp[j]);

            s[i][j] = s_row_item;
        }
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
