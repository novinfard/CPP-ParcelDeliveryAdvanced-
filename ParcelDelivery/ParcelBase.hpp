//
//  ParcelBase.hpp
//  ParcelDelivery
//
//  Created by Soheil on 11/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef ParcelBase_hpp
#define ParcelBase_hpp

#include <stdio.h>

class ParcelBase {
public:
	ParcelBase();
	virtual double getCost() const = 0; // pure virtual
};

#endif /* ParcelBase_hpp */
