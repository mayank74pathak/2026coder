string encode(vector<string>& s) {
        // code here
        string encoded="";
      for(auto it:s)
    {
        encoded+=it+"#";
    }
        return encoded;
    }

    vector<string> decode(string& s) {
        
        // code here
        vector<string>decoded;
        string st="";
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='#')
                {
                    decoded.push_back(st);
                st="";
                    
                }
                else
                st+=s[i];
            }
            return decoded;
        
    }
