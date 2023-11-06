#ifndef ELECTRICITYBILL_CALCULATOR_H
#define ELECTRICITYBILLCALCULATOR_H

#include <QString>
#include <vector>

class ElectricityBillCalculator {
public:
    ElectricityBillCalculator();
    void setReadings(int prevReading, int currReading);
    double getAmount() const;
    std::vector<std::pair<QString, double>> getConsumptionHistory() const;
private:
    int m_prevReading;
    int m_currReading;
    double m_amount;
    std::vector<std::pair<QString, double>> m_consumptionHistory;
};

#endif // ELECTRICITYBILLCALCULATOR_H
