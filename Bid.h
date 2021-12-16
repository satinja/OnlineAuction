#pragma once
class Bid
{
private:
	float amount;
public:
	Bid(float amount);
	void setBiddingAmount(float amt);
	float getBiddingAmount();
};

