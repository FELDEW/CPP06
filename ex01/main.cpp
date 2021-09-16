
#include "Serialize.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t intpointer;

	intpointer = reinterpret_cast<uintptr_t>(ptr);
	return intpointer;
}

Data *deserialize(uintptr_t raw)
{
	Data *ptr;
	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int main ()
{
	Data* value = new Data();
	Data* value2;
	value->age = 42;
	value->name = "Bob";
	std::cout << "Data: " << value << std::endl;
	std::cout << "Name: " << value->name << std::endl;
	std::cout << "Age: " << value->age << std::endl;
	uintptr_t raw = serialize(value);
	std::cout << "Data after serialize - Raw: " << raw << std::endl;
	value2 = deserialize(raw);
	std::cout << "Deserialized data: " << std::endl;
	std::cout << "Data: " << value2 << std::endl;
	std::cout << "Name: " << value2->name << std::endl;
	std::cout << "Age: " << value2->age << std::endl;
	delete value;
	return 0;
}
