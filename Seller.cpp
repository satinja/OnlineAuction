#include "Seller.h"


Seller::Seller(std::string id)
{
	sellerId = id;
	Product* product1 = new Product("1", 1000);
	Product* product2 = new Product("2", 1000);
	Product* product3 = new Product("3", 1000);
	Product* product4 = new Product("4", 1000);
	products = {
		{product1->getProductId() , product1},
		{product2->getProductId() , product2},
		{product3->getProductId() , product3},
		{product4->getProductId() , product4},
	};
}

void Seller::initiateAuction(std::string productId)
{
	std::cout << "Auction Started!!\nPlease start palacing bids\n";
	std::cout << "Base Price is: " << getProductById(productId)->getBasePrice() << "\n";
	std::cout << "\n\n";

	//std::thread timer_thread(&Timer::startTimer);

	//std::thread bid_listener();

	//timer_thread.join();
}

void Seller::announceUpdateBidding(std::string productId, float bidAmount)
{
	std::cout << "New bid of: " << bidAmount << "\n";
	Product* product = getProductById(productId);
	product->setSellingValue(bidAmount);
	std::cout << "Now the new selling value of product is: " << product->getSellingPrice() << "\n";
}

Product* Seller::getProductById(std::string id)
{
	return products[id];
}

std::queue<Bid*> Seller::getBiddingQueue()
{
	return biddingQueue;
}

void Seller::addBiddingToQueue(Product* product, Bid* bid)
{
	biddingQueue.push(bid);

	newBiddingAnnounced(product);
}

void Seller::newBiddingAnnounced(Product* product)
{
	//do processing
	Bid* bid = biddingQueue.front();
	biddingQueue.pop();

	float currentSellingPrice = product->getSellingPrice();

	if (bid->getBiddingAmount() > currentSellingPrice)
	{
		product->setSellingValue(bid->getBiddingAmount());

		std::cout << "New selling amount became: " << product->getSellingPrice() << "\n";
	}
}