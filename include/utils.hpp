#pragma once
#include <vector>
#include <list>
#include <string>

extern float getme();
inline float getthis(){return 4.f;}


inline std::string numtostr(std::string basename, int val) {
	std::string tmp;
	tmp = basename+std::to_string(val);
	return tmp;
}

template <class l>
inline std::vector<l> list2vec(std::list<l> list) {
	std::vector<l> vec(list.size());
	//magic
	auto index=0;
	for(auto& t : list){
		vec.at(index++)=std::move(t);
		//std::move(t,vec[index++]);
	}
	return vec;
}