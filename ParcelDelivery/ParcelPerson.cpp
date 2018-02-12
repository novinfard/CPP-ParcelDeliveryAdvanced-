//
//  ParcelPerson.cpp
//  ParcelDelivery
//
//  Created by Soheil on 24/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "ParcelPerson.hpp"
#include <iostream>
using namespace std;

ParcelPerson::ParcelPerson(const string &fullNameValue, const string &addressValue, const string &cityValue, const string &postcodeValue):
	fullName(fullNameValue), address(addressValue), city(cityValue), postcode(postcodeValue){
	
};

void ParcelPerson::setFullname(const string &fullnameVal) {
	fullName = fullnameVal;
}
string ParcelPerson::getFullname() const {
	return fullName;
}

void ParcelPerson::setAddress(const string &addressVal) {
	address = addressVal;
}
string ParcelPerson::getAddress() const {
	return address;
}

void ParcelPerson::setCity(const string &cityVal) {
	city = cityVal;
}
string ParcelPerson::getCity() const {
	return city;
}

void ParcelPerson::setPostcode(const string &PostcodeVal) {
	postcode = PostcodeVal;
}
string ParcelPerson::getPostcode() const {
	return postcode;
}


void ParcelPerson::print() {
	cout << getFullname() << " / "
	<< getAddress() << " / "
	<< getCity() << " / "
	<< getPostcode() << endl;
}
