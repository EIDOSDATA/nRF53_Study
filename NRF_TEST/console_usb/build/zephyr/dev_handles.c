#include <device.h>
#include <toolchain.h>

/* 1 : /soc/peripheral@50000000/clock@5000:
 * Direct Dependencies:
 *   - (/soc/interrupt-controller@e000e100)
 *   - (/soc/peripheral@50000000)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_clock_5000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 2 : /soc/peripheral@50000000/gpio@842800:
 * Direct Dependencies:
 *   - (/soc/peripheral@50000000)
 * Supported:
 *   - (/soc/peripheral@50000000/spi@a000)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_gpio_842800[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 3 : /soc/peripheral@50000000/gpio@842500:
 * Direct Dependencies:
 *   - (/soc/peripheral@50000000)
 * Supported:
 *   - (/buttons/button_0)
 *   - (/buttons/button_1)
 *   - (/buttons/button_2)
 *   - (/buttons/button_3)
 *   - (/leds/led_0)
 *   - (/leds/led_1)
 *   - (/leds/led_2)
 *   - (/leds/led_3)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_gpio_842500[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 4 : /soc/peripheral@50000000/usbd@36000/cdc_acm_uart0:
 * Direct Dependencies:
 *   - (/soc/peripheral@50000000/usbd@36000)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_usbd_36000_S_cdc_acm_uart0[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/peripheral@50000000/uart@8000:
 * Direct Dependencies:
 *   - (/soc/interrupt-controller@e000e100)
 *   - (/soc/peripheral@50000000)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_uart_8000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
