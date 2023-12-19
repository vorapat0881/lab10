#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
        int count = 0;
        float sum = 0;
        float y = 0;
        string x;
        ifstream source("score.txt");
        while (getline(source,x))
        {
                sum += atof(x.c_str());
                y += pow(atof(x.c_str()),2);
                count++;
        }
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        double z = sum/count;
        cout << "Mean = " << z << "\n";
        cout << "Standard deviation = " << sqrt((y/count)-z*z);
        source.close();
        return 0;
}




//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
