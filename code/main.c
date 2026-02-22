 
 /* USER CODE BEGIN Includes */
#include "rc522.h"
/* USER CODE END Includes */

 /* USER CODE BEGIN PV */
uint8_t CardID[5];
uint8_t status;
/* USER CODE END PV */
 
 /* USER CODE BEGIN 2 */
  MFRC522_Init();

  /* USER CODE END 2 */

  /* USER CODE BEGIN 3 */
    status = MFRC522_Check(CardID);

    if (status == MI_OK) {
      HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
      HAL_Delay(500);
      HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
    }
  }
  /* USER CODE END 3 */