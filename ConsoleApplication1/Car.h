#pragma once
#include <string>
class Car
{
private:
	std::string model;

public:
	Car(std::string aModel);

	void setModel(const std::string& aModel);
//	void setModel2(const std::string& aModel);

	std::string getModel() const;
};

