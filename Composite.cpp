//
// Created by Zhou Yitao on 2019-04-01.
//

#include "Composite.h"

void Composite::addRate(string bank, string currency, double rate) {
    record[currency][bank] = rate;
}

void Composite::printCompositeRate() {
    for (auto it: record) {
        string currency = it.first;
        double sum = 0;
        for (auto bank: it.second) {
            sum += bank.second;
        }
        cout << currency << " " << sum / it.second.size() << endl;
    }
}