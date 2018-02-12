//
//  TwodayParcel.hpp
//  ParcelDelivery
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef TwodayParcel_hpp
#define TwodayParcel_hpp

#include <stdio.h>
#include "Parcel.hpp"
#include "ParcelPerson.hpp"

class TwodayParcel: public Parcel {
public:
	TwodayParcel(const ParcelPerson &, const ParcelPerson &, double);
	
	double getCost() const;
	
private:
	const double flatFee = 4.0;
};

#endif /* TwodayParcel_hpp */
