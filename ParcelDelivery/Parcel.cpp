//
//  Parcel.cpp
//  ParcelDelivery
//
//  Created by Soheil on 24/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "Parcel.hpp"
using namespace std;

Parcel::Parcel(const ParcelPerson &senderValue, const ParcelPerson &recipientValue, double weightValue):
sender(senderValue), recipient(recipientValue)
{
	setWeight(weightValue);
};

void Parcel::setWeight(double weightVal) {
	if(weightVal > 0.0) {
		weight = weightVal;
	} else {
		throw invalid_argument("Weight must be more than 0");
	}
}
double Parcel::getWeight() const {
	return weight;
}

double Parcel::getCost() const {
	double finalCost = weight * basePercelRatePerKG;
	return finalCost;
}
