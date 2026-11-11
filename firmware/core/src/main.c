#include "board_config.h"

void SystemClock_Config(void);
void GPIO_Init(void);
void IMU_Init(void);
void Baro_Init(void);
void UART_Debug_Init(void);
void Strobe_Trigger(bool state);

int main(void) {
    /* Initialize low-level hardware */
    SystemClock_Config();
    GPIO_Init();
    UART_Debug_Init();

    /* Bring up core sensors */
    IMU_Init();
    Baro_Init();

    while (1) {
        /* Main flight stabilization & sensor polling loop */
    }
}
