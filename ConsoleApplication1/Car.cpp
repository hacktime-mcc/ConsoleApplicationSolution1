#include "Car.h"

Car::Car(std::string aModel) : model{ aModel } {
	// Nothing to do.
}

void Car::setModel(const std::string& aModel) {
	model = aModel;
}

//void Car::setModel2(const std::string& aModel) {
//	model = aModel;
//}

std::string Car::getModel() const {
	return model;
}