#include <fstream>

int main(int argc, char *argv[])
{
	std::ofstream ofs ("hello.txt", std::ofstream::out);
	ofs << "Hello CS203!\n";
	ofs.close();
	cout << "Execution Complete" << endl;
	return 0;  
}
