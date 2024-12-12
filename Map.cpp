#include<iostream>
#include<map>
#include<string>
int main(){
	std::map<std::string,int> m = {
		{"qwe",123},{"rty",147},{"cfg",456},{"pqrs",5623}
	};
		
		std:: string stateName;
		
		std::cout<<"Enter the state name to find the State:: \n";
		std::getline(std::cin,stateName);
		
		auto key = m.find(stateName);
		
		if(key!=m.end()){
			std::cout<<"The population of "<<stateName<<" is "<<key->second<<"\n";
		}
		else{
			std::cout<<"Data Not Found";
		}
	return 0;
}
