#include <stdio.h>
#include <string.h>

// Struct to hold one sensor reading from a rescue zone
typedef struct {
    int zone_id;
    float temperature;
    float gas_level;
    int victim_count;
    char status[20];
} SensorReading;

// Print all readings in a readable table format
void printReadings(SensorReading readings[], int count) {
    printf("%-8s %-12s %-10s %-14s %-10s\n",
           "Zone", "Temp(C)", "Gas Level", "Victim Count", "Status");
    printf("--------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-8d %-12.1f %-10.1f %-14d %-10s\n",
               readings[i].zone_id,
               readings[i].temperature,
               readings[i].gas_level,
               readings[i].victim_count,
               readings[i].status);
    }
}

int main() {
    // 10 hardcoded sensor readings with varied values
    SensorReading readings[10] = {
        {1, 32.5, 0.2, 2, "safe"},
        {2, 65.8, 0.7, 0, "danger"},
        {3, 45.0, 0.4, 1, "warning"},
        {4, 28.3, 0.1, 3, "safe"},
        {5, 78.2, 0.9, 0, "critical"},
        {6, 30.1, 0.3, 5, "safe"},
        {7, 55.6, 0.6, 2, "warning"},
        {8, 22.0, 0.05, 0, "safe"},
        {9, 82.4, 0.85, 1, "critical"},
        {10, 40.7, 0.35, 4, "warning"}
    };

    printf("SMART RESCUE DATA SYSTEM — v1\n");
    printf("Sensor Readings Report\n\n");

    printReadings(readings, 10);

    return 0;
}