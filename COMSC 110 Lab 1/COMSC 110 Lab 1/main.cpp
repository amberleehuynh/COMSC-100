
#include <iostream>

using namespace std;

// This is how you declare a constant string
const char *TOPNAME = "Brasas Do Brazil Churrascaria";
const char *TOPTYPE = "Brazilian Steakhouse";
const int TOPREVIEWS = 530;


int main()
{
    cout << "The top 10 restaurants in Concord are: " << endl;
    cout << "1) Brasas Do Brazil Churrascaria (4.5 stars) " << endl;
    cout << "2) Lima (4 stars) " << endl;
    cout << "3) Ohgane (4 stars) " << endl;
    cout << "4) Shabuya (4 stars) " << endl;
    cout << "5) Yard House (3.5 stars) " << endl;
    cout << "6) Puesto Concord (4 stars) " << endl;
    cout << "7) Fresh Tray (4 stars) " << endl;
    cout << "8) Eureka (4 stars) " << endl;
    cout << "9) Aung Maylaka (4.5 stars) " << endl;
    cout << "10) Himalayan Cuisine (4 stars) " << endl;
    cout << "The top restaurant " << TOPNAME << " is a " << TOPTYPE << " and has " << TOPREVIEWS << " reviews" << "." << endl;

    return 0;
}
