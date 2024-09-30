#include <iostream>
#include <thread>
#include "Electricity.h"
#include "Water.h"
#include "Internet.h"

using namespace std;

// ������� ������ ����� ����
void useElectricity(Electricity& electricityResource, double amount) {
    electricityResource.useResource(amount);
}

// ������� ������ ����� ���
void useWater(Water& waterResource, double amount) {
    waterResource.useResource(amount);
}

// ������� ������ ����� �������
void useInternet(Internet& internetResource, double amount) {
    internetResource.useResource(amount);
}

int main() {
    // ����� ������
    Electricity electricity(100); // 100 ������ ����
    Water water(50);               // 50 ������ ���
    Internet internet(75);         // 75 ������ �������

    // ����� �������
    thread t1(useElectricity, ref(electricity), 20);
    thread t2(useWater, ref(water), 10);
    thread t3(useInternet, ref(internet), 30);
    thread t4(useElectricity, ref(electricity), 15);
    thread t5(useWater, ref(water), 5);
    thread t6(useInternet, ref(internet), 20);

    // ����� ����� �� ��������
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();

    // ���� ����� �������
    electricity.displayResource();
    water.displayResource();
    internet.displayResource();

    return 0;
}
