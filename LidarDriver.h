#ifndef LIDARDRIVER_H
#define LIDARDRIVER_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int BUFFER_DIM = 10;

class LidarDriver{
	private:
		vector<double> buffer[BUFFER_DIM];
		double resolution;
		int oldestScan = 0;
		int lastScan = 0;
		
	public:
		LidarDriver(double r);
		void new_scan(vector<double>);
		vector<double> get_scan();
		void clear_buffer();
		double get_distance(double);
		friend ostream& operator<<(ostream& output, const LidarDriver);
};
ostream& operator<<(ostream& output, const LidarDriver);

#endif
