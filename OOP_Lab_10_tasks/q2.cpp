#include<iostream>
using namespace std;
template<typename n>
class sensorlog {
    private:
    n* D;
    int s;
    public:
    sensorlog(n inputData[], int T) : s(T) {
        D = new n[s]; 
        for(int i = 0; i < s; i++) {
            D[i] = inputData[i]; // Copy values into the allocated memory
        }
    }

    n avg() {
        n total = (n)0;
        for(int i = 0; i < s; i++) {
            total += D[i];
        }
        return total / (float)s;
    }

    ~sensorlog() {
        delete[] D;
    }
};

int main() {
    float sensorData[] = {10.5f, 20.0f, 30.5f, 40.0f}; 
    int dataSize = 4;
    sensorlog<float> myLog(sensorData, dataSize);
    float result = myLog.avg();

    std::cout << "Sensor Log Test" << std::endl;
    std::cout << "Readings: 10.5, 20.0, 30.5, 40.0" << std::endl;
    std::cout << "Calculated Average: " << result << std::endl;

    return 0;
}
