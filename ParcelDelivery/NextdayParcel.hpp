//
//  NextdayParcel.hpp
//  ParcelDelivery
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef NextdayParcel_hpp
#define NextdayParcel_hpp

#include <stdio.h>
#include "Parcel.hpp"
#include "ParcelPerson.hpp"

class NextdayParcel: public Parcel {
public:
	NextdayParcel(const ParcelPerson &, const ParcelPerson &, double);
	
	double getCost() const;
	
private:
	const double additionalPercelRatePerKG = 3.5;
};

#endif /* NextdayParcel_hpp */
