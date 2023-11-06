#include "electricitybillcalculator.h"

ElectricityBillCalculator::ElectricityBillCalculator()
    : m_prevReading(0), m_currReading(0), m_amount(0.0)
{
}

void ElectricityBillCalculator::setReadings(int prevReading, int currReading)
{
    m_prevReading = prevReading;
    m_currReading = currReading;

    int units = m_currReading - m_prevReading;

    if (units <= 110) {
        m_amount = units * 50;
    } else if (units <= 400) {
        m_amount = 110 * 50 + (units - 110) * 79;
    } else if (units <= 800) {
        m_amount = 110 * 50 + 290 * 79 + (units - 400) * 94;
    } else if (units <= 2000) {
        m_amount = 110 * 50 + 290 * 79 + 400 * 94 + (units - 800) * 99;
    } else {
        // handle units above 2000...
    }

    if (units <= 220) {
        m_amount *= 1.0;
    } else {
        m_amount *= 1.1925;
    }

    // calculate consumption history for the last six months
    m_consumptionHistory.clear();
    for (int i = 1; i <= 6; ++i) {
        QString monthName;
        double amount = 0.0;
        // TODO: calculate consumption for each month
        m_consumptionHistory.push_back(std::make_pair(monthName, amount));
    }
}

double ElectricityBillCalculator::getAmount() const
{
    return m_amount;
}

std::vector<std::pair<QString, double>> ElectricityBillCalculator::getConsumptionHistory() const
{
    return m_consumptionHistory;
}
