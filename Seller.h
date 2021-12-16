#pragma once
#include <unordered_map>
#include <queue>
#include "Product.h"
#include "Timer.h"
#include "Bid.h"

class Seller
{
	std::queue<Bid*> biddingQueue;
	std::string sellerId;
	std::unordered_map<std::string, Product*> products;

	void newBiddingAnnounced(Product* product);
public:
	Seller(std::string id);
	void initiateAuction(std::string productId);
	void announceUpdateBidding(std::string productId, float bidAmount);
	Product* getProductById(std::string id);
	std::queue<Bid*> getBiddingQueue();
	void addBiddingToQueue(Product* product, Bid* bid);
};

