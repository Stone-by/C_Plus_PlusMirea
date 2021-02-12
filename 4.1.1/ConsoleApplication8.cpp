// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;
class RootObject {
private:
	RootObject* module;
	string name;
	vector<RootObject*> components;
public:
	RootObject(RootObject* module = nullptr) : module(module) {}
	RootObject(string name, RootObject* module = nullptr) : module(module),
		name(name) {}
	void setName(string value)
	{
		name = value;
	}
	string getName()
	{
		return name;
	}
	void connect(RootObject* component)
	{
		components.push_back(component);
	}
	RootObject* find(string name) {
		RootObject* object = nullptr;
		for (RootObject* element : this->components) {
			if (element->getName() == name)
				object = element;
			if (object == nullptr) {
				object = element->find(name);
			}
		}
		return object;
	}
	void printSelf() {
		if (components.empty()) return;
		cout << endl << name;
		for (auto element : components)
			cout << " " << element->getName();
		for (auto e : components) e->printSelf();
	}
	~RootObject() {
		for (auto element : components)
			delete element;
	}
};
int main() {
	string moduleName, componentName;
	cin >> moduleName;
	RootObject primary(moduleName);
	RootObject* innerComponent;
	cin >> moduleName >> componentName;
	while (moduleName != componentName) {
		if (moduleName == primary.getName())
			primary.connect(new RootObject(componentName,
				&primary));
		else
		{
			innerComponent = primary.find(moduleName);
			if (innerComponent != nullptr)
				(*innerComponent).connect(new
					RootObject(componentName, innerComponent));
		}
		cin >> moduleName >> componentName;
	}
	cout << primary.getName();
	primary.printSelf();
}