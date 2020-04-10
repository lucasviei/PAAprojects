#include<bits/stdc++.h>

using namespace std;
 
int maiorseq(string s1, string s2){
    int maior = 0;
    for(int i = 0;i<s1.length();i++){
        for(int j =0;j<s2.length();j++){
            if (s1[i] == s2[j])
            {
                int count = 0;
                for (int k = 0; k < k+i<s1.length(),k+j<s2.length(); k++)
                {
                    if(s1[k+i] != s2[k+j]){
                        break;
                    }
                    count++;
                }
                if(count > maior){
                    maior = count;
                }
                
            }
            
        }
    }
    return maior;
}

int main() {
    
    string seq1;
    string seq2;
    while(getline(cin,seq1)){
        getline(cin,seq2);
        cout << maiorseq(seq1,seq2) << endl;
    }        
    
    return 0;
}