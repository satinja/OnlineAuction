#include "Bid.h"

Bid::Bid(float amt)
{
	amount = amt;
}

void Bid::setBiddingAmount(float amt)
{
	amount = amt;
}

float Bid::getBiddingAmount()
{
	return amount;
}
