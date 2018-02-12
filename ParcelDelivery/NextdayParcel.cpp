//
//  NextdayParcel.cpp
//  ParcelDelivery
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "NextdayParcel.hpp"
using namespace std;

NextdayParcel::NextdayParcel(const ParcelPerson &senderValue, const ParcelPerson &recipientValue, double weightValue):
Parcel(senderValue, recipientValue, weightValue)
{
	
}

double NextdayParcel::getCost() const {
	double finalCost = Parcel::getCost() + (additionalPercelRatePerKG * Parcel::getWeight());
	return finalCost;
}

