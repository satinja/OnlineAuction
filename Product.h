#pragma once
#include <string>
class Product
{
private:
	std::string productId;
	float basePrice;
	float sellingPrice;
public:
	void setProductId(std::string id);
	std::string getProductId();
	void setBasePrice(float price);
	void setSellingValue(float price);
	float getBasePrice();
	float getSellingPrice();
	Product(std::string id, float basePrice);
};

