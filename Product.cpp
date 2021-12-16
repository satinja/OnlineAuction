#include "Product.h"

void Product::setProductId(std::string id)
{
	productId = id;
}

std::string Product::getProductId()
{
	return productId;
}

void Product::setBasePrice(float price)
{
	basePrice = price;
}

void Product::setSellingValue(float price)
{
	sellingPrice = price;
}

float Product::getBasePrice()
{
	return basePrice;
}

float Product::getSellingPrice()
{
	return sellingPrice;
}

Product::Product(std::string id, float price)
{
	productId = id;
	basePrice = price;
	sellingPrice = price;
}
