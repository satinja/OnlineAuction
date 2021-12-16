#pragma once
#include <string>
#include <unordered_set>
#include "Product.h"
#include "Seller.h"

class Buyer
{
	std::string buyerId;
	std::string buyerName;
	std::unordered_set<std::string> purchasedItems;

public:
	Buyer(std::string buyerId, std::string buyerName = "");
	void placeBidding(Product* product, float biddingAmount, Seller* seller);
	void addAndItemToPurchasedList(std::string productId);

};

