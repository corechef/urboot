/*
 * Do not edit: automatically generated by mkavrintel.pl
 *
 * ur_uarttable.c
 *
 * Defines uart properties in a C table
 * Email the meta-author regarding errors/omissions in this file
 *
 * Published under GNU General Public License, version 3 (GPL-3.0)
 * Meta-author Stefan Rueger <stefan.rueger@urclocks.com>
 *
 * v 1.1
 * 12.05.2024
 *
 */

typedef struct {
  const char *avrname;
  int numuarts, uarttype, has_u2x, brr_is12bit, pc_22bit;
} Uart_info;

Uart_info Uart_table[] = {
  { "ATtiny4", 0, 0, 0, 0, 0 },
  { "ATtiny5", 0, 0, 0, 0, 0 },
  { "ATtiny9", 0, 0, 0, 0, 0 },
  { "ATtiny10", 0, 0, 0, 0, 0 },
  { "ATtiny20", 0, 0, 0, 0, 0 },
  { "ATtiny40", 0, 0, 0, 0, 0 },
  { "ATtiny102", 1, 1, 1, 1, 0 },
  { "ATtiny104", 1, 1, 1, 1, 0 },
  { "ATtiny11", 0, 0, 0, 0, 0 },
  { "ATtiny12", 0, 0, 0, 0, 0 },
  { "ATtiny13", 0, 0, 0, 0, 0 },
  { "ATtiny13A", 0, 0, 0, 0, 0 },
  { "ATtiny15", 0, 0, 0, 0, 0 },
  { "ATtiny22", 0, 0, 0, 0, 0 },
  { "ATtiny24", 0, 0, 0, 0, 0 },
  { "ATtiny24A", 0, 0, 0, 0, 0 },
  { "ATtiny25", 0, 0, 0, 0, 0 },
  { "ATtiny26", 0, 0, 0, 0, 0 },
  { "ATtiny28", 0, 0, 0, 0, 0 },
  { "ATtiny43U", 0, 0, 0, 0, 0 },
  { "ATtiny44", 0, 0, 0, 0, 0 },
  { "ATtiny44A", 0, 0, 0, 0, 0 },
  { "ATtiny45", 0, 0, 0, 0, 0 },
  { "ATtiny48", 0, 0, 0, 0, 0 },
  { "ATtiny84", 0, 0, 0, 0, 0 },
  { "ATtiny84A", 0, 0, 0, 0, 0 },
  { "ATtiny85", 0, 0, 0, 0, 0 },
  { "ATtiny87", 1, 2, 0, 1, 0 },
  { "ATtiny88", 0, 0, 0, 0, 0 },
  { "ATtiny167", 1, 2, 0, 1, 0 },
  { "ATtiny261", 0, 0, 0, 0, 0 },
  { "ATtiny261A", 0, 0, 0, 0, 0 },
  { "ATtiny441", 2, 1, 1, 1, 0 },
  { "ATtiny461", 0, 0, 0, 0, 0 },
  { "ATtiny461A", 0, 0, 0, 0, 0 },
  { "ATtiny828", 1, 1, 1, 1, 0 },
  { "ATtiny828R", 1, 1, 1, 1, 0 },
  { "ATtiny841", 2, 1, 1, 1, 0 },
  { "ATtiny861", 0, 0, 0, 0, 0 },
  { "ATtiny861A", 0, 0, 0, 0, 0 },
  { "ATtiny1634", 2, 1, 1, 1, 0 },
  { "ATtiny1634R", 2, 1, 1, 1, 0 },
  { "ATtiny2313", 1, 1, 1, 1, 0 },
  { "ATtiny2313A", 1, 1, 1, 1, 0 },
  { "ATtiny4313", 1, 1, 1, 1, 0 },
  { "ATmega8", 1, 1, 1, 1, 0 },
  { "ATmega8A", 1, 1, 1, 1, 0 },
  { "ATmega8HVA", 0, 0, 0, 0, 0 },
  { "ATmega8U2", 1, 1, 1, 1, 0 },
  { "ATmega16", 1, 1, 1, 1, 0 },
  { "ATmega16A", 1, 1, 1, 1, 0 },
  { "ATmega16HVA", 0, 0, 0, 0, 0 },
  { "ATmega16HVB", 0, 0, 0, 0, 0 },
  { "ATmega16HVBrevB", 0, 0, 0, 0, 0 },
  { "ATmega16M1", 1, 2, 0, 1, 0 },
  { "ATmega16HVA2", 0, 0, 0, 0, 0 },
  { "ATmega16U2", 1, 1, 1, 1, 0 },
  { "ATmega16U4", 1, 1, 1, 1, 0 },
  { "ATmega32", 1, 1, 1, 1, 0 },
  { "ATmega32A", 1, 1, 1, 1, 0 },
  { "ATmega32HVB", 0, 0, 0, 0, 0 },
  { "ATmega32HVBrevB", 0, 0, 0, 0, 0 },
  { "ATmega32C1", 1, 2, 0, 1, 0 },
  { "ATmega32M1", 1, 2, 0, 1, 0 },
  { "ATmega32HVE2", 0, 0, 0, 0, 0 },
  { "ATmega32U2", 1, 1, 1, 1, 0 },
  { "ATmega32U4", 1, 1, 1, 1, 0 },
  { "ATmega32U6", 1, 1, 1, 1, 0 },
  { "ATmega48", 1, 1, 1, 1, 0 },
  { "ATmega48A", 1, 1, 1, 1, 0 },
  { "ATmega48P", 1, 1, 1, 1, 0 },
  { "ATmega48PA", 1, 1, 1, 1, 0 },
  { "ATmega48PB", 1, 1, 1, 1, 0 },
  { "ATmega64", 2, 1, 1, 1, 0 },
  { "ATmega64A", 2, 1, 1, 1, 0 },
  { "ATmega64HVE", 1, 2, 0, 1, 0 },
  { "ATmega64C1", 1, 2, 0, 1, 0 },
  { "ATmega64M1", 1, 2, 0, 1, 0 },
  { "ATmega64HVE2", 1, 2, 0, 1, 0 },
  { "ATmega64RFR2", 2, 1, 1, 1, 0 },
  { "ATmega88", 1, 1, 1, 1, 0 },
  { "ATmega88A", 1, 1, 1, 1, 0 },
  { "ATmega88P", 1, 1, 1, 1, 0 },
  { "ATmega88PA", 1, 1, 1, 1, 0 },
  { "ATmega88PB", 1, 1, 1, 1, 0 },
  { "ATmega103", 1, 1, 0, 0, 0 },
  { "ATmega103comp", 0, 0, 0, 0, 0 },
  { "ATmega128", 2, 1, 1, 1, 0 },
  { "ATmega128A", 2, 1, 1, 1, 0 },
  { "ATmega128RFA1", 2, 1, 1, 1, 0 },
  { "ATmega128RFR2", 2, 1, 1, 1, 0 },
  { "ATmega161", 2, 1, 1, 1, 0 },
  { "ATmega161comp", 0, 0, 0, 0, 0 },
  { "ATmega162", 2, 1, 1, 1, 0 },
  { "ATmega163", 1, 1, 1, 0, 0 },
  { "ATmega164A", 2, 1, 1, 1, 0 },
  { "ATmega164P", 2, 1, 1, 1, 0 },
  { "ATmega164PA", 2, 1, 1, 1, 0 },
  { "ATmega165", 1, 1, 1, 1, 0 },
  { "ATmega165A", 1, 1, 1, 1, 0 },
  { "ATmega165P", 1, 1, 1, 1, 0 },
  { "ATmega165PA", 1, 1, 1, 1, 0 },
  { "ATmega168", 1, 1, 1, 1, 0 },
  { "ATmega168A", 1, 1, 1, 1, 0 },
  { "ATmega168P", 1, 1, 1, 1, 0 },
  { "ATmega168PA", 1, 1, 1, 1, 0 },
  { "ATmega168PB", 1, 1, 1, 1, 0 },
  { "ATmega169", 1, 1, 1, 1, 0 },
  { "ATmega169A", 1, 1, 1, 1, 0 },
  { "ATmega169P", 1, 1, 1, 1, 0 },
  { "ATmega169PA", 1, 1, 1, 1, 0 },
  { "ATmega256RFR2", 2, 1, 1, 1, 1 },
  { "ATmega323", 1, 1, 1, 1, 0 },
  { "ATmega324A", 2, 1, 1, 1, 0 },
  { "ATmega324P", 2, 1, 1, 1, 0 },
  { "ATmega324PA", 2, 1, 1, 1, 0 },
  { "ATmega324PB", 3, 1, 1, 1, 0 },
  { "ATmega325", 1, 1, 1, 1, 0 },
  { "ATmega325A", 1, 1, 1, 1, 0 },
  { "ATmega325P", 1, 1, 1, 1, 0 },
  { "ATmega325PA", 1, 1, 1, 1, 0 },
  { "ATmega328", 1, 1, 1, 1, 0 },
  { "ATmega328P", 1, 1, 1, 1, 0 },
  { "ATmega328PB", 2, 1, 1, 1, 0 },
  { "ATmega329", 1, 1, 1, 1, 0 },
  { "ATmega329A", 1, 1, 1, 1, 0 },
  { "ATmega329P", 1, 1, 1, 1, 0 },
  { "ATmega329PA", 1, 1, 1, 1, 0 },
  { "ATmega406", 0, 0, 0, 0, 0 },
  { "ATmega640", 4, 1, 1, 1, 0 },
  { "ATmega644", 1, 1, 1, 1, 0 },
  { "ATmega644A", 2, 1, 1, 1, 0 },
  { "ATmega644P", 2, 1, 1, 1, 0 },
  { "ATmega644PA", 2, 1, 1, 1, 0 },
  { "ATmega644RFR2", 2, 1, 1, 1, 0 },
  { "ATmega645", 1, 1, 1, 1, 0 },
  { "ATmega645A", 1, 1, 1, 1, 0 },
  { "ATmega645P", 1, 1, 1, 1, 0 },
  { "ATmega649", 1, 1, 1, 1, 0 },
  { "ATmega649A", 1, 1, 1, 1, 0 },
  { "ATmega649P", 1, 1, 1, 1, 0 },
  { "ATmega1280", 4, 1, 1, 1, 0 },
  { "ATmega1281", 2, 1, 1, 1, 0 },
  { "ATmega1284", 2, 1, 1, 1, 0 },
  { "ATmega1284P", 2, 1, 1, 1, 0 },
  { "ATmega1284RFR2", 2, 1, 1, 1, 0 },
  { "ATmega2560", 4, 1, 1, 1, 1 },
  { "ATmega2561", 2, 1, 1, 1, 1 },
  { "ATmega2564RFR2", 2, 1, 1, 1, 1 },
  { "ATmega3250", 1, 1, 1, 1, 0 },
  { "ATmega3250A", 1, 1, 1, 1, 0 },
  { "ATmega3250P", 1, 1, 1, 1, 0 },
  { "ATmega3250PA", 1, 1, 1, 1, 0 },
  { "ATmega3290", 1, 1, 1, 1, 0 },
  { "ATmega3290A", 1, 1, 1, 1, 0 },
  { "ATmega3290P", 1, 1, 1, 1, 0 },
  { "ATmega3290PA", 1, 1, 1, 1, 0 },
  { "ATmega6450", 1, 1, 1, 1, 0 },
  { "ATmega6450A", 1, 1, 1, 1, 0 },
  { "ATmega6450P", 1, 1, 1, 1, 0 },
  { "ATmega6490", 1, 1, 1, 1, 0 },
  { "ATmega6490A", 1, 1, 1, 1, 0 },
  { "ATmega6490P", 1, 1, 1, 1, 0 },
  { "ATmega8515", 1, 1, 1, 1, 0 },
  { "ATmega8535", 1, 1, 1, 1, 0 },
  { "AT43USB320", 1, 1, 0, 0, 0 },
  { "AT43USB355", 0, 0, 0, 0, 0 },
  { "AT76C711", 0, 0, 0, 0, 0 },
  { "AT86RF401", 0, 0, 0, 0, 0 },
  { "AT89S51", 0, 0, 0, 0, 0 },
  { "AT89S52", 0, 0, 0, 0, 0 },
  { "AT90PWM1", 0, 0, 0, 0, 0 },
  { "AT90PWM2", 1, 1, 1, 1, 0 },
  { "AT90PWM2B", 1, 1, 1, 1, 0 },
  { "AT90PWM3", 1, 1, 1, 1, 0 },
  { "AT90PWM3B", 1, 1, 1, 1, 0 },
  { "AT90CAN32", 2, 1, 1, 1, 0 },
  { "AT90CAN64", 2, 1, 1, 1, 0 },
  { "AT90PWM81", 0, 0, 0, 0, 0 },
  { "AT90USB82", 1, 1, 1, 1, 0 },
  { "AT90SCR100", 1, 1, 1, 1, 0 },
  { "AT90SCR100H", 1, 1, 1, 1, 0 },
  { "AT90CAN128", 2, 1, 1, 1, 0 },
  { "AT90PWM161", 0, 0, 0, 0, 0 },
  { "AT90USB162", 1, 1, 1, 1, 0 },
  { "AT90PWM216", 1, 1, 1, 1, 0 },
  { "AT90PWM316", 1, 1, 1, 1, 0 },
  { "AT90USB646", 1, 1, 1, 1, 0 },
  { "AT90USB647", 1, 1, 1, 1, 0 },
  { "AT90S1200", 0, 0, 0, 0, 0 },
  { "AT90USB1286", 1, 1, 1, 1, 0 },
  { "AT90USB1287", 1, 1, 1, 1, 0 },
  { "AT90S2313", 1, 1, 0, 0, 0 },
  { "AT90S2323", 0, 0, 0, 0, 0 },
  { "AT90S2333", 1, 1, 0, 1, 0 },
  { "AT90S2343", 0, 0, 0, 0, 0 },
  { "AT90S4414", 1, 1, 0, 0, 0 },
  { "AT90S4433", 1, 1, 0, 1, 0 },
  { "AT90S4434", 1, 1, 0, 0, 0 },
  { "AT90S8515", 1, 1, 0, 0, 0 },
  { "AT90S8515comp", 0, 0, 0, 0, 0 },
  { "AT90C8534", 0, 0, 0, 0, 0 },
  { "AT90S8535", 1, 1, 0, 0, 0 },
  { "AT90S8535comp", 0, 0, 0, 0, 0 },
  { "AT94K", 2, 1, 1, 1, 0 },
  { "ATA5272", 1, 2, 0, 1, 0 },
  { "ATA5505", 1, 2, 0, 1, 0 },
  { "ATA5700M322", 0, 0, 0, 0, 0 },
  { "ATA5702M322", 0, 0, 0, 0, 0 },
  { "ATA5781", 0, 0, 0, 0, 0 },
  { "ATA5782", 0, 0, 0, 0, 0 },
  { "ATA5783", 0, 0, 0, 0, 0 },
  { "ATA5787", 1, 2, 0, 1, 0 },
  { "ATA5790", 0, 0, 0, 0, 0 },
  { "ATA5790N", 0, 0, 0, 0, 0 },
  { "ATA5791", 0, 0, 0, 0, 0 },
  { "ATA5795", 0, 0, 0, 0, 0 },
  { "ATA5831", 0, 0, 0, 0, 0 },
  { "ATA5832", 0, 0, 0, 0, 0 },
  { "ATA5833", 0, 0, 0, 0, 0 },
  { "ATA5835", 1, 2, 0, 1, 0 },
  { "ATA6285", 0, 0, 0, 0, 0 },
  { "ATA6286", 0, 0, 0, 0, 0 },
  { "ATA6289", 0, 0, 0, 0, 0 },
  { "ATA6612C", 1, 1, 1, 1, 0 },
  { "ATA6613C", 1, 1, 1, 1, 0 },
  { "ATA6614Q", 1, 1, 1, 1, 0 },
  { "ATA6616C", 1, 2, 0, 1, 0 },
  { "ATA6617C", 1, 2, 0, 1, 0 },
  { "ATA8210", 0, 0, 0, 0, 0 },
  { "ATA8215", 0, 0, 0, 0, 0 },
  { "ATA8510", 0, 0, 0, 0, 0 },
  { "ATA8515", 0, 0, 0, 0, 0 },
  { "ATA664251", 1, 2, 0, 1, 0 },
  { "M3000", 1, 1, 1, 1, 0 },
  { "LGT8F88P", 1, 1, 1, 1, 0 },
  { "LGT8F168P", 1, 1, 1, 1, 0 },
  { "LGT8F328P", 1, 1, 1, 1, 0 },
  { "ATxmega8E5", 2, 4, 0, 1, 0 },
  { "ATxmega16A4", 5, 4, 0, 1, 0 },
  { "ATxmega16A4U", 5, 4, 0, 1, 0 },
  { "ATxmega16C4", 3, 4, 0, 1, 0 },
  { "ATxmega16D4", 2, 4, 0, 1, 0 },
  { "ATxmega16E5", 2, 4, 0, 1, 0 },
  { "ATxmega32C3", 3, 4, 0, 1, 0 },
  { "ATxmega32D3", 3, 4, 0, 1, 0 },
  { "ATxmega32A4", 5, 4, 0, 1, 0 },
  { "ATxmega32A4U", 5, 4, 0, 1, 0 },
  { "ATxmega32C4", 3, 4, 0, 1, 0 },
  { "ATxmega32D4", 2, 4, 0, 1, 0 },
  { "ATxmega32E5", 2, 4, 0, 1, 0 },
  { "ATxmega64A1", 8, 4, 0, 1, 0 },
  { "ATxmega64A1U", 8, 4, 0, 1, 0 },
  { "ATxmega64B1", 2, 4, 0, 1, 0 },
  { "ATxmega64A3", 7, 4, 0, 1, 0 },
  { "ATxmega64A3U", 7, 4, 0, 1, 0 },
  { "ATxmega64B3", 1, 4, 0, 1, 0 },
  { "ATxmega64C3", 3, 4, 0, 1, 0 },
  { "ATxmega64D3", 3, 4, 0, 1, 0 },
  { "ATxmega64A4", 0, 4, 0, 1, 0 },
  { "ATxmega64A4U", 5, 4, 0, 1, 0 },
  { "ATxmega64D4", 2, 4, 0, 1, 0 },
  { "ATxmega128A1", 8, 4, 0, 1, 1 },
  { "ATxmega128A1revD", 8, 4, 0, 1, 1 },
  { "ATxmega128A1U", 8, 4, 0, 1, 1 },
  { "ATxmega128B1", 2, 4, 0, 1, 1 },
  { "ATxmega128A3", 7, 4, 0, 1, 1 },
  { "ATxmega128A3U", 7, 4, 0, 1, 1 },
  { "ATxmega128B3", 1, 4, 0, 1, 1 },
  { "ATxmega128C3", 3, 4, 0, 1, 1 },
  { "ATxmega128D3", 3, 4, 0, 1, 1 },
  { "ATxmega128A4", 0, 4, 0, 1, 1 },
  { "ATxmega128A4U", 5, 4, 0, 1, 1 },
  { "ATxmega128D4", 2, 4, 0, 1, 1 },
  { "ATxmega192A1", 0, 4, 0, 1, 1 },
  { "ATxmega192A3", 7, 4, 0, 1, 1 },
  { "ATxmega192A3U", 7, 4, 0, 1, 1 },
  { "ATxmega192C3", 3, 4, 0, 1, 1 },
  { "ATxmega192D3", 3, 4, 0, 1, 1 },
  { "ATxmega256A1", 0, 4, 0, 1, 1 },
  { "ATxmega256A3", 7, 4, 0, 1, 1 },
  { "ATxmega256A3B", 6, 4, 0, 1, 1 },
  { "ATxmega256A3BU", 6, 4, 0, 1, 1 },
  { "ATxmega256A3U", 7, 4, 0, 1, 1 },
  { "ATxmega256C3", 3, 4, 0, 1, 1 },
  { "ATxmega256D3", 3, 4, 0, 1, 1 },
  { "ATxmega384C3", 3, 4, 0, 1, 1 },
  { "ATxmega384D3", 3, 4, 0, 1, 1 },
  { "ATtiny202", 1, 8, 0, 1, 0 },
  { "ATtiny204", 1, 8, 0, 1, 0 },
  { "ATtiny212", 1, 8, 0, 1, 0 },
  { "ATtiny214", 1, 8, 0, 1, 0 },
  { "ATtiny402", 1, 8, 0, 1, 0 },
  { "ATtiny404", 1, 8, 0, 1, 0 },
  { "ATtiny406", 1, 8, 0, 1, 0 },
  { "ATtiny412", 1, 8, 0, 1, 0 },
  { "ATtiny414", 1, 8, 0, 1, 0 },
  { "ATtiny416", 1, 8, 0, 1, 0 },
  { "ATtiny416auto", 1, 8, 0, 1, 0 },
  { "ATtiny417", 1, 8, 0, 1, 0 },
  { "ATtiny424", 2, 8, 0, 1, 0 },
  { "ATtiny426", 2, 8, 0, 1, 0 },
  { "ATtiny427", 2, 8, 0, 1, 0 },
  { "ATtiny804", 1, 8, 0, 1, 0 },
  { "ATtiny806", 1, 8, 0, 1, 0 },
  { "ATtiny807", 1, 8, 0, 1, 0 },
  { "ATtiny814", 1, 8, 0, 1, 0 },
  { "ATtiny816", 1, 8, 0, 1, 0 },
  { "ATtiny817", 1, 8, 0, 1, 0 },
  { "ATtiny824", 2, 8, 0, 1, 0 },
  { "ATtiny826", 2, 8, 0, 1, 0 },
  { "ATtiny827", 2, 8, 0, 1, 0 },
  { "ATtiny1604", 1, 8, 0, 1, 0 },
  { "ATtiny1606", 1, 8, 0, 1, 0 },
  { "ATtiny1607", 1, 8, 0, 1, 0 },
  { "ATtiny1614", 1, 8, 0, 1, 0 },
  { "ATtiny1616", 1, 8, 0, 1, 0 },
  { "ATtiny1617", 1, 8, 0, 1, 0 },
  { "ATtiny1624", 2, 8, 0, 1, 0 },
  { "ATtiny1626", 2, 8, 0, 1, 0 },
  { "ATtiny1627", 2, 8, 0, 1, 0 },
  { "ATtiny3214", 1, 8, 0, 1, 0 },
  { "ATtiny3216", 1, 8, 0, 1, 0 },
  { "ATtiny3217", 1, 8, 0, 1, 0 },
  { "ATtiny3224", 2, 8, 0, 1, 0 },
  { "ATtiny3226", 2, 8, 0, 1, 0 },
  { "ATtiny3227", 2, 8, 0, 1, 0 },
  { "ATmega808", 3, 8, 0, 1, 0 },
  { "ATmega809", 4, 8, 0, 1, 0 },
  { "ATmega1608", 3, 8, 0, 1, 0 },
  { "ATmega1609", 4, 8, 0, 1, 0 },
  { "ATmega3208", 3, 8, 0, 1, 0 },
  { "ATmega3209", 4, 8, 0, 1, 0 },
  { "ATmega4808", 3, 8, 0, 1, 0 },
  { "ATmega4809", 4, 8, 0, 1, 0 },
  { "AVR8EA28", 0, 8, 0, 1, 0 },
  { "AVR8EA32", 0, 8, 0, 1, 0 },
  { "AVR16DD14", 2, 8, 0, 1, 0 },
  { "AVR16DU14", 2, 8, 0, 1, 0 },
  { "AVR16EB14", 1, 8, 0, 1, 0 },
  { "AVR16DD20", 2, 8, 0, 1, 0 },
  { "AVR16DU20", 2, 8, 0, 1, 0 },
  { "AVR16EB20", 1, 8, 0, 1, 0 },
  { "AVR16DD28", 2, 8, 0, 1, 0 },
  { "AVR16DU28", 2, 8, 0, 1, 0 },
  { "AVR16EA28", 3, 8, 0, 1, 0 },
  { "AVR16EB28", 1, 8, 0, 1, 0 },
  { "AVR16DD32", 2, 8, 0, 1, 0 },
  { "AVR16DU32", 2, 8, 0, 1, 0 },
  { "AVR16EA32", 3, 8, 0, 1, 0 },
  { "AVR16EB32", 1, 8, 0, 1, 0 },
  { "AVR16EA48", 3, 8, 0, 1, 0 },
  { "AVR32DD14", 2, 8, 0, 1, 0 },
  { "AVR32DU14", 2, 8, 0, 1, 0 },
  { "AVR32DD20", 2, 8, 0, 1, 0 },
  { "AVR32DU20", 2, 8, 0, 1, 0 },
  { "AVR32DA28", 3, 8, 0, 1, 0 },
  { "AVR32DB28", 3, 8, 0, 1, 0 },
  { "AVR32DD28", 2, 8, 0, 1, 0 },
  { "AVR32DU28", 2, 8, 0, 1, 0 },
  { "AVR32EA28", 3, 8, 0, 1, 0 },
  { "AVR32DA32", 3, 8, 0, 1, 0 },
  { "AVR32DB32", 3, 8, 0, 1, 0 },
  { "AVR32DD32", 2, 8, 0, 1, 0 },
  { "AVR32DU32", 2, 8, 0, 1, 0 },
  { "AVR32EA32", 3, 8, 0, 1, 0 },
  { "AVR32DA48", 5, 8, 0, 1, 0 },
  { "AVR32DB48", 5, 8, 0, 1, 0 },
  { "AVR32EA48", 3, 8, 0, 1, 0 },
  { "AVR64DD14", 2, 8, 0, 1, 0 },
  { "AVR64DD20", 2, 8, 0, 1, 0 },
  { "AVR64DA28", 3, 8, 0, 1, 0 },
  { "AVR64DB28", 3, 8, 0, 1, 0 },
  { "AVR64DD28", 2, 8, 0, 1, 0 },
  { "AVR64DU28", 2, 8, 0, 1, 0 },
  { "AVR64EA28", 3, 8, 0, 1, 0 },
  { "AVR64DA32", 3, 8, 0, 1, 0 },
  { "AVR64DB32", 3, 8, 0, 1, 0 },
  { "AVR64DD32", 2, 8, 0, 1, 0 },
  { "AVR64DU32", 2, 8, 0, 1, 0 },
  { "AVR64EA32", 3, 8, 0, 1, 0 },
  { "AVR64DA48", 5, 8, 0, 1, 0 },
  { "AVR64DB48", 5, 8, 0, 1, 0 },
  { "AVR64EA48", 3, 8, 0, 1, 0 },
  { "AVR64DA64", 6, 8, 0, 1, 0 },
  { "AVR64DB64", 6, 8, 0, 1, 0 },
  { "AVR128DA28", 3, 8, 0, 1, 0 },
  { "AVR128DB28", 3, 8, 0, 1, 0 },
  { "AVR128DA32", 3, 8, 0, 1, 0 },
  { "AVR128DB32", 3, 8, 0, 1, 0 },
  { "AVR128DA48", 5, 8, 0, 1, 0 },
  { "AVR128DB48", 5, 8, 0, 1, 0 },
  { "AVR128DA64", 6, 8, 0, 1, 0 },
  { "AVR128DB64", 6, 8, 0, 1, 0 },
};
