#include "classes.hpp"
#include <iostream>
#include "utils.hpp"

using namespace std;
thing mything;
static list<thing> mystuff;
//static auto myvec2;

void createdata() {
	for(auto x=0; x<10;x++) {
		std::string is=numtostr("viagithubupload_gitsync2015",x);
		//cout<<is<<"\n";
		mystuff.push_back(thing(is));
	}
}

void cleardata() {
	mystuff.clear();
}

void showdata() {
	for(auto& r : mystuff) {
		cout<<r.StrName()<<"\n";
	}
	//for(auto& : )
}



int main(int argc, char *argv[])
{
	createdata();
	cout<<"thing name: "<<mything.Name()<<"\n";
	cout<<"getme: "<<getme()<<"\n";
	cout<<"getthis: "<<getthis()<<"\n";
	auto myvec=list2vec(mystuff);
	//myvec2=list2vec(mystuff);
	showdata();
	
	for(auto& v : myvec) {
		cout<<"vec: "<<v.StrName()<<"\n";
	}
	
	cleardata();
	return 0;
}