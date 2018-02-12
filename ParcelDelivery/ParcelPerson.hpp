//
//  ParcelPerson.hpp
//  ParcelDelivery
//
//  Created by Soheil on 24/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef ParcelPerson_hpp
#define ParcelPerson_hpp

#include <stdio.h>
#include <string>

class ParcelPerson {
public:
	ParcelPerson(const std::string &, const std::string &, const std::string &, const std::string &);

	void setFullname(const std::string &);
	std::string getFullname() const;
	void setAddress(const std::string &);
	std::string getAddress() const;
	void setCity(const std::string &);
	std::string getCity() const;
	void setPostcode(const std::string &);
	std::string getPostcode() const;
	
	void print();
	
private:
	std::string fullName;
	std::string address;
	std::string city;
	std::string postcode;	
};


#endif /* ParcelPerson_hpp */
