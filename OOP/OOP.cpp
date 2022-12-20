#include <iostream>

//��� - �����������, ������������, ������������
//������
// ����������� �����������
//���������� ������������� � ������������
class Vehicle {

public:
	//�����������  (�����������������)
	//������� 1
	/*Vehicle(int newMaxSpeed, const std::string& newColor, const std::string newType) {
		std::cout << "Constructor Vehicle()" << std::endl;
		maxSpeed = newMaxSpeed;
		color = newColor;
		type = newType;	
		//s = new char[50];
	}*/
	//������� 2
	Vehicle(int newMaxSpeed, const std::string& newColor, const std::string newType) : maxSpeed(newMaxSpeed), color(newColor), type(newType) {}




	//Vehicle(){} // ����������� ����������� ��������� 
	Vehicle() = delete; // �������� ������������ ��� ���������� � ���� �������� ������
	
	Vehicle(int newMaxSpeed) {
		maxSpeed = newMaxSpeed;
		color = "yellow";
		type = "bus";
	}
	//����������� �����������
	Vehicle(Vehicle & obj) {
		maxSpeed = obj.getMaxSpeed();
		color = obj.getColor();
		type = obj.getType();
	}
	
	//����������
	~Vehicle(){
		//std::cout << "Destructor Vehicle()" << std::endl;
		//delete[] s;
	}

	std::string& getColor() {
		return color;
	}
	void setColor(const std::string& newColor) {
		color = newColor;
	}

	const std::string& getType() {
		return type;
	}
	void setType(const std::string& newType) {
		type = newType;
	}
	// ������ - ����� (����������)
	int getMaxSpeed() {		
		return maxSpeed;
	}
	//������ - ������������� ����� �������� ��� ���� ������
	void setMaxSpeed(int newSpeed) {
		maxSpeed = newSpeed;
	}
	//���������� ��������� == (���������������)
	bool operator==(Vehicle& other) {
		if (maxSpeed == other.maxSpeed && color == other.color && type == other.type) {
			return true;
		}
		return false;
	}

	bool operator!() {
		if (maxSpeed < 0) {
			return true;
		}
		return false;
	}

private:	
	int maxSpeed;
	std::string color;
	std::string type;
	//char* s;
};
	
int main() {
	//std::cout << "Start of main()" << std::endl;
	/*Vehicle car(20, "black", "van");
	//car.setMaxSpeed(50);
	//std::cout << "Max speed is: " << car.getMaxSpeed() << std::endl;

	std::string carColor = car.getColor();
	std::cout << "carColor: " << carColor << " car.getColor() "<< car.getColor() << std::endl;
	carColor = "green";
	std::cout << "carColor: " << carColor << " car.getColor() "<< car.getColor() << std::endl;

	const std::string& carType = car.getType();
	//carType = "randomType"; �� ��������� ��� �����������
	std::cout << carType << " "<< car.getType() << std::endl;*/


	Vehicle originalCar(15, "white", "bus");
	Vehicle newCar(originalCar);
	Vehicle foreingCar(15, "white", "abc");
	/*std::cout << originalCar.getMaxSpeed() << "  " << originalCar.getColor() << " " << originalCar.getType() << std::endl;
	std::cout << "================\n";
	std::cout << newCar.getMaxSpeed() << "  " << newCar.getColor() << " " << newCar.getType() << std::endl;*/
	
	
	std::cout << (originalCar == newCar) << std::endl;
	std::cout << "================\n";
	std::cout << (originalCar == foreingCar) << std::endl;

	//std::cout << "End of main()" << std::endl;
}



