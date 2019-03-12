#include <math.h>
#include <iostream>
using namespace std;

double HaversineDistance(double Lat1, double Lon1, double Lat2, double Lon2)
{
  double Lat1R, Lon1R, Lat2R, Lon2R, u, v;
  Lat1R = (Lat1* M_PI / 180);
  Lon1R = (Lon1* M_PI / 180);
  Lat2R = (Lat2* M_PI / 180);
  Lon2R = (Lon2* M_PI / 180);
  u = sin((Lat2R - Lat1R)/2);
  v = sin((Lon2R - Lon1R)/2);
  return 2.0 * 3958.8 * asin(sqrt(u * u + cos(Lat1R) * cos(Lat2R) * v * v));
}

int main()
{
    double Lat1 = 36.12;
    double Lon1 = -86.67;
    double Lat2 =33.94;
    double Lon2 = -118.4;

    std::cout << "Distance = " << HaversineDistance(Lat1, Lon1, Lat2, Lon2) << std::endl;
    return 0;
}
