#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

//#define ASSIGNMENT_2		//Uncomment to switch to feedback mode for assignment 2

/*
	O notation: fill in your time complexities here
		-	Constructor:	O(n)
		-	getCity:		O(n)
		-	checkCity:		O(log(n))
		-	markUsed		O(n)
		-	restart			O(1)
*/

class Prototype		
{
private:
    std::unordered_map<char, std::vector<std::string>> cityMap;
    std::unordered_set<std::string> usedCities; 

public:

    Prototype(const std::string& filename) {
        std::ifstream file(filename);

        std::string city;
        while (std::getline(file, city)) {
            if (!city.empty()) {
                cityMap[city[0]].push_back(city);
            }
        }
        file.close();
    }

    std::string getCity(char firstChar) {
        auto& cities = cityMap[firstChar];
        for (const auto& city : cities) {
            if (usedCities.find(city) == usedCities.end()) {
                return city;
            }
        }
        return "";
    }
   
    bool checkCity(const std::string& city) {
        if (cityMap.find(city[0]) == cityMap.end()) {
            return false;
        }

        const auto& cities = cityMap[city[0]];
        return std::find(cities.begin(), cities.end(), city) != cities.end() &&
            usedCities.find(city) == usedCities.end();
    }
 
    void markUsed(const std::string& city) {
        if (checkCity(city)) {
            usedCities.insert(city);
        }
    }
  
    void restart() {
        usedCities.clear();
    }
};