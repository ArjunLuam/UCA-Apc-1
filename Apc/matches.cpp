#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
		int total,sum;
		int a,b;cin>>a>>b; int zero=0,one=0,two=0,three=0,
		four=0,five=0,six=0,seven=0,eight=0,nine=0;
		sum = a+b;
		ostringstream str1;
		str1 << sum;
		string s = str1.str();
		int len;
		len = s.size();
		for(int i=0;i<len;i++){
			if(s[i]=='0'){
				zero = zero+6;
			}else if(s[i]=='1'){
				one = one+2;
			}else if(s[i]=='2'){
				two = two+5;
			}else if(s[i]=='3'){
				three = three+5;
			}else if(s[i]=='4'){
				four = four+4;
			}else if(s[i]=='5'){
				five = five+5;
			}else if(s[i]=='6'){
				six = six+6;
			}else if(s[i]=='7'){
				seven = seven+3;
			}else if(s[i]=='8'){
				eight=eight+7;
			}else if(s[i]=='9'){
				nine = nine+6;
			}

		}

		total = zero+one+two+three+four+five+six+seven+eight+nine;
		cout<<total<<endl;

	}
}
