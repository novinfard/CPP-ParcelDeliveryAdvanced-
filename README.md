# Parcel delivery cost calculation - Polymorphisms

Basic: A Courier company provides a number of delivery options within the UK, each with specific cost associated. Standard parcel delivery cost is calculated as £2.6 per kg. Two day delivery option adds a flat fee £4 on top of the standard delivery price and Next day delivery option adds an additional £3.5 per kg on top of the standard delivery price.
This program calculates the cost of parcel delivery. I have considered the inheritance hierarchy in my design.

Advanced: Improve the Parcel delivery cost calculation application you created from last week by applying polymorphisms. Now, create an Abstract Base class and make the cost calculation function pure virtual. The program should contain a vector of Package pointers to objects of all different packages. Loop through the vector to process the packages polymorphically. For each package, invoke get functions to obtain the address information of the sender and the recipient, the print the two addresses as they would appear on mailing labels. Call each Package’s function to calculate the delivery cost. Keep track of the total delivery cost for all Packages in the vector, and display this total when the loop terminals.

