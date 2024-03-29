#pragma once
#include "playerActions.h"
#include "card.h"

class Player : public IPlayerActions {
public:

	// == ������������ � ����������� ==
	Player();
	Player(double money);
	Player(const Player& copy);

	~Player();

	//Card* removeCard();

	// ��������������� ����������
	Player& operator= (const Player& _copyPlayer);

	// �������/������
	double getMoney();
	void setMoney(double money);

	// == ������ ==
	void getTheCard(Card card);
	void setNewCards();

	double placeABet(double bet) override;

	void printAllCard(bool isStand);
	int sumOfCard(bool isOne);

private:
	double _money;
	Card* _cards;
	int _countOfCard;
};
