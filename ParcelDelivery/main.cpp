//
//  main.cpp
//  ParcelDelivery
//
//  Created by Soheil on 24/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "Parcel.hpp"
#include "ParcelBase.hpp"
#include "TwodayParcel.hpp"
#include "ParcelPerson.hpp"
#include "NextdayParcel.hpp"

using namespace std;

void virtualViaPointer(const ParcelBase *); // prototype

int main(int argc, const char * argv[]) {
	
	ParcelPerson sender = ParcelPerson("Alex Morgan", "Magana, Liverpool Street", "London", "E1 DDA");
	ParcelPerson recipient = ParcelPerson("Mohsen", "Magana, Liverpool Street", "London", "E1 DDA");
	double weight = 10.1;

	// standard parcel
	Parcel standardParcelExample = Parcel(sender, recipient, weight);
	cout << "The standard parcel cost is £" << standardParcelExample.getCost() << endl;
	cout << "Sender: ";
	standardParcelExample.sender.print();
	cout << "Recipient: ";
	standardParcelExample.recipient.print();
	cout << endl;
	
	// Two day parcel
	TwodayParcel twodayParcelExample = TwodayParcel(sender, recipient, weight);
	cout << "The two day parcel cost is £" << twodayParcelExample.getCost() << endl;
	cout << "Sender: ";
	twodayParcelExample.sender.print();
	cout << "Recipient: ";
	twodayParcelExample.recipient.print();
	cout << endl;
	
	// Next day parcel
	NextdayParcel nextdayParcelExample = NextdayParcel(sender, recipient, weight);
	cout << "The next day parcel cost £" << nextdayParcelExample.getCost() << endl;
	cout << "Sender: ";
	nextdayParcelExample.sender.print();
	cout << "Recipient: ";
	nextdayParcelExample.recipient.print();
	cout << endl;
	
	//  vector for all objects
	vector <ParcelBase *> parcels(3);
	parcels[0] = &standardParcelExample;
	parcels[1] = &twodayParcelExample;
	parcels[2] = &nextdayParcelExample;
	
	// using pointer for different objects
	double totalCost = 0;
	for (const ParcelBase *pointerSample : parcels) {
		virtualViaPointer(pointerSample);
		totalCost += pointerSample->getCost();
	}
	cout << "Total Cost is £" << totalCost << endl;

	return 0;
}

void virtualViaPointer(const ParcelBase * baseClassPtr) {
	cout << "Cost calculation is £" << baseClassPtr->getCost() << endl;
}
