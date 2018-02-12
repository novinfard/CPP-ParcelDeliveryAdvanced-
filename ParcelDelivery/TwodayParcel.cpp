//
//  TwodayParcel.cpp
//  ParcelDelivery
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "TwodayParcel.hpp"
using namespace std;

TwodayParcel::TwodayParcel(const ParcelPerson &senderValue, const ParcelPerson &recipientValue, double weightValue):
Parcel(senderValue, recipientValue, weightValue)
{
	
}

double TwodayParcel::getCost() const {
	double finalCost = Parcel::getCost() + flatFee;
	return finalCost;
}
