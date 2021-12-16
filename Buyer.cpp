#include "Buyer.h"
#include <iostream>

Buyer::Buyer(std::string id, std::string name)
{
	buyerId = id;
	buyerName = name;
}

void Buyer::placeBidding(Product* product, float biddingAmount, Seller* seller)
{
	Bid* bid = new Bid(biddingAmount);
	if (biddingAmount > product->getSellingPrice()) {
		product->setSellingValue(biddingAmount);
		std::cout << "New bidding: " << product->getSellingPrice() << "\n";
	}

	seller->addBiddingToQueue(product, bid);
}

void Buyer::addAndItemToPurchasedList(std::string productId)
{
	purchasedItems.insert(productId);
}
