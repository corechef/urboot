/*
 * Do not edit: automatically generated by mkavrintel.pl
 *
 * urboot_mcuid.h
 *
 * unique device id from libavrdude-avrintel.h
 *
 * Published under GNU General Public License, version 3 (GPL-3.0)
 * Meta-author Stefan Rueger <stefan.rueger@urclocks.com>
 *
 * v 1.2
 * 20.05.2024
 *
 */

#ifndef URBOOT_MCUID_H
#define URBOOT_MCUID_H

#if !defined(__AVR_DEVICE_NAME__)
#include "urboot_devicename.h"
#endif

#if !defined(RAMSIZE) && defined(RAMSTART) && defined(RAMEND)
#define RAMSIZE ((RAMEND)-(RAMSTART)+1)
#endif

#if !defined(RAMSTART) || !defined(RAMSIZE)
#include "urboot_sram.h"
#endif

#define UB_MCUID(name) UB_MCUID_expand(name)
#define UB_MCUID_expand(name) id_##name

#define UB_VBLVECUU(name) UB_VBLVECUU_expand(name)
#define UB_VBLVECUU_expand(name) vbu_##name

// Once assigned never change for backward compatibility
#define id_attiny4           0u
#define id_attiny5           1u
#define id_attiny9           2u
#define id_attiny10          3u
#define id_attiny20          4u
#define id_attiny40          5u
#define id_attiny102         6u
#define id_attiny104         7u
#define id_attiny11          8u
#define id_attiny12          9u
#define id_attiny13         10u
#define id_attiny13a        11u
#define id_attiny15         12u
#define id_attiny22         13u
#define id_attiny24         14u
#define id_attiny24a        15u
#define id_attiny25         16u
#define id_attiny26         17u
#define id_attiny28         18u
#define id_attiny43u        19u
#define id_attiny44         20u
#define id_attiny44a        21u
#define id_attiny45         22u
#define id_attiny48         23u
#define id_attiny84         24u
#define id_attiny84a        25u
#define id_attiny85         26u
#define id_attiny87         27u
#define id_attiny88         28u
#define id_attiny167        29u
#define id_attiny261        30u
#define id_attiny261a       31u
#define id_attiny441        32u
#define id_attiny461        33u
#define id_attiny461a       34u
#define id_attiny828        35u
#define id_attiny828r       36u
#define id_attiny841        37u
#define id_attiny861        38u
#define id_attiny861a       39u
#define id_attiny1634       40u
#define id_attiny1634r      41u
#define id_attiny2313       42u
#define id_attiny2313a      43u
#define id_attiny4313       44u
#define id_atmega8          45u
#define id_atmega8a         46u
#define id_atmega8hva       47u
#define id_atmega8u2        48u
#define id_atmega16         49u
#define id_atmega16a        50u
#define id_atmega16hva      51u
#define id_atmega16hvb      52u
#define id_atmega16hvbrevb  53u
#define id_atmega16m1       54u
#define id_atmega16hva2     55u
#define id_atmega16u2       56u
#define id_atmega16u4       57u
#define id_atmega32         58u
#define id_atmega32a        59u
#define id_atmega32hvb      60u
#define id_atmega32hvbrevb  61u
#define id_atmega32c1       62u
#define id_atmega32m1       63u
#define id_atmega32hve2    379u
#define id_atmega32u2       64u
#define id_atmega32u4       65u
#define id_atmega32u6       66u
#define id_atmega48         67u
#define id_atmega48a        68u
#define id_atmega48p        69u
#define id_atmega48pa       70u
#define id_atmega48pb       71u
#define id_atmega64         72u
#define id_atmega64a        73u
#define id_atmega64hve      74u
#define id_atmega64c1       75u
#define id_atmega64m1       76u
#define id_atmega64hve2     77u
#define id_atmega64rfr2     78u
#define id_atmega88         79u
#define id_atmega88a        80u
#define id_atmega88p        81u
#define id_atmega88pa       82u
#define id_atmega88pb       83u
#define id_atmega103        84u
#define id_atmega103comp   374u
#define id_atmega128        85u
#define id_atmega128a       86u
#define id_atmega128rfa1    87u
#define id_atmega128rfr2    88u
#define id_atmega161        89u
#define id_atmega161comp   375u
#define id_atmega162        90u
#define id_atmega163        91u
#define id_atmega164a       92u
#define id_atmega164p       93u
#define id_atmega164pa      94u
#define id_atmega165        95u
#define id_atmega165a       96u
#define id_atmega165p       97u
#define id_atmega165pa      98u
#define id_atmega168        99u
#define id_atmega168a      100u
#define id_atmega168p      101u
#define id_atmega168pa     102u
#define id_atmega168pb     103u
#define id_atmega169       104u
#define id_atmega169a      105u
#define id_atmega169p      106u
#define id_atmega169pa     107u
#define id_atmega256rfr2   108u
#define id_atmega323       109u
#define id_atmega324a      110u
#define id_atmega324p      111u
#define id_atmega324pa     112u
#define id_atmega324pb     113u
#define id_atmega325       114u
#define id_atmega325a      115u
#define id_atmega325p      116u
#define id_atmega325pa     117u
#define id_atmega328       118u
#define id_atmega328p      119u
#define id_atmega328pb     120u
#define id_atmega329       121u
#define id_atmega329a      122u
#define id_atmega329p      123u
#define id_atmega329pa     124u
#define id_atmega406       125u
#define id_atmega640       126u
#define id_atmega644       127u
#define id_atmega644a      128u
#define id_atmega644p      129u
#define id_atmega644pa     130u
#define id_atmega644rfr2   131u
#define id_atmega645       132u
#define id_atmega645a      133u
#define id_atmega645p      134u
#define id_atmega649       135u
#define id_atmega649a      136u
#define id_atmega649p      137u
#define id_atmega1280      138u
#define id_atmega1281      139u
#define id_atmega1284      140u
#define id_atmega1284p     141u
#define id_atmega1284rfr2  142u
#define id_atmega2560      143u
#define id_atmega2561      144u
#define id_atmega2564rfr2  145u
#define id_atmega3250      146u
#define id_atmega3250a     147u
#define id_atmega3250p     148u
#define id_atmega3250pa    149u
#define id_atmega3290      150u
#define id_atmega3290a     151u
#define id_atmega3290p     152u
#define id_atmega3290pa    153u
#define id_atmega6450      154u
#define id_atmega6450a     155u
#define id_atmega6450p     156u
#define id_atmega6490      157u
#define id_atmega6490a     158u
#define id_atmega6490p     159u
#define id_atmega8515      160u
#define id_atmega8535      161u
#define id_at43usb320      162u
#define id_at43usb355      163u
#define id_at76c711        164u
#define id_at86rf401       165u
#define id_at89s51         372u
#define id_at89s52         373u
#define id_at90pwm1        166u
#define id_at90pwm2        167u
#define id_at90pwm2b       168u
#define id_at90pwm3        169u
#define id_at90pwm3b       170u
#define id_at90can32       171u
#define id_at90can64       172u
#define id_at90pwm81       173u
#define id_at90usb82       174u
#define id_at90scr100      175u
#define id_at90scr100h     376u
#define id_at90can128      176u
#define id_at90pwm161      177u
#define id_at90usb162      178u
#define id_at90pwm216      179u
#define id_at90pwm316      180u
#define id_at90usb646      181u
#define id_at90usb647      182u
#define id_at90s1200       183u
#define id_at90usb1286     184u
#define id_at90usb1287     185u
#define id_at90s2313       186u
#define id_at90s2323       187u
#define id_at90s2333       188u
#define id_at90s2343       189u
#define id_at90s4414       190u
#define id_at90s4433       191u
#define id_at90s4434       192u
#define id_at90s8515       193u
#define id_at90s8515comp   377u
#define id_at90c8534       194u
#define id_at90s8535       195u
#define id_at90s8535comp   378u
#define id_at94k           196u
#define id_ata5272         197u
#define id_ata5505         198u
#define id_ata5700m322     199u
#define id_ata5702m322     200u
#define id_ata5781         201u
#define id_ata5782         202u
#define id_ata5783         203u
#define id_ata5787         204u
#define id_ata5790         205u
#define id_ata5790n        206u
#define id_ata5791         207u
#define id_ata5795         208u
#define id_ata5831         209u
#define id_ata5832         210u
#define id_ata5833         211u
#define id_ata5835         212u
#define id_ata6285         213u
#define id_ata6286         214u
#define id_ata6289         215u
#define id_ata6612c        216u
#define id_ata6613c        217u
#define id_ata6614q        218u
#define id_ata6616c        219u
#define id_ata6617c        220u
#define id_ata8210         221u
#define id_ata8215         222u
#define id_ata8510         223u
#define id_ata8515         224u
#define id_ata664251       225u
#define id_m3000           226u
#define id_lgt8f88p        227u
#define id_lgt8f168p       228u
#define id_lgt8f328p       229u
#define id_atxmega8e5      230u
#define id_atxmega16a4     231u
#define id_atxmega16a4u    232u
#define id_atxmega16c4     233u
#define id_atxmega16d4     234u
#define id_atxmega16e5     235u
#define id_atxmega32c3     236u
#define id_atxmega32d3     237u
#define id_atxmega32a4     238u
#define id_atxmega32a4u    239u
#define id_atxmega32c4     240u
#define id_atxmega32d4     241u
#define id_atxmega32e5     242u
#define id_atxmega64a1     243u
#define id_atxmega64a1u    244u
#define id_atxmega64b1     245u
#define id_atxmega64a3     246u
#define id_atxmega64a3u    247u
#define id_atxmega64b3     248u
#define id_atxmega64c3     249u
#define id_atxmega64d3     250u
#define id_atxmega64a4     251u
#define id_atxmega64a4u    252u
#define id_atxmega64d4     253u
#define id_atxmega128a1    254u
#define id_atxmega128a1revd 255u
#define id_atxmega128a1u   256u
#define id_atxmega128b1    257u
#define id_atxmega128a3    258u
#define id_atxmega128a3u   259u
#define id_atxmega128b3    260u
#define id_atxmega128c3    261u
#define id_atxmega128d3    262u
#define id_atxmega128a4    263u
#define id_atxmega128a4u   264u
#define id_atxmega128d4    265u
#define id_atxmega192a1    266u
#define id_atxmega192a3    267u
#define id_atxmega192a3u   268u
#define id_atxmega192c3    269u
#define id_atxmega192d3    270u
#define id_atxmega256a1    271u
#define id_atxmega256a3    272u
#define id_atxmega256a3b   273u
#define id_atxmega256a3bu  274u
#define id_atxmega256a3u   275u
#define id_atxmega256c3    276u
#define id_atxmega256d3    277u
#define id_atxmega384c3    278u
#define id_atxmega384d3    279u
#define id_attiny202       280u
#define id_attiny204       281u
#define id_attiny212       282u
#define id_attiny214       283u
#define id_attiny402       284u
#define id_attiny404       285u
#define id_attiny406       286u
#define id_attiny412       287u
#define id_attiny414       288u
#define id_attiny416       289u
#define id_attiny416auto   290u
#define id_attiny417       291u
#define id_attiny424       292u
#define id_attiny426       293u
#define id_attiny427       294u
#define id_attiny804       295u
#define id_attiny806       296u
#define id_attiny807       297u
#define id_attiny814       298u
#define id_attiny816       299u
#define id_attiny817       300u
#define id_attiny824       301u
#define id_attiny826       302u
#define id_attiny827       303u
#define id_attiny1604      304u
#define id_attiny1606      305u
#define id_attiny1607      306u
#define id_attiny1614      307u
#define id_attiny1616      308u
#define id_attiny1617      309u
#define id_attiny1624      310u
#define id_attiny1626      311u
#define id_attiny1627      312u
#define id_attiny3214      313u
#define id_attiny3216      314u
#define id_attiny3217      315u
#define id_attiny3224      316u
#define id_attiny3226      317u
#define id_attiny3227      318u
#define id_atmega808       319u
#define id_atmega809       320u
#define id_atmega1608      321u
#define id_atmega1609      322u
#define id_atmega3208      323u
#define id_atmega3209      324u
#define id_atmega4808      325u
#define id_atmega4809      326u
#define id_avr8ea28        327u
#define id_avr8ea32        328u
#define id_avr16dd14       329u
#define id_avr16du14       386u
#define id_avr16eb14       380u
#define id_avr16dd20       330u
#define id_avr16du20       387u
#define id_avr16eb20       381u
#define id_avr16dd28       331u
#define id_avr16du28       388u
#define id_avr16ea28       332u
#define id_avr16eb28       382u
#define id_avr16dd32       333u
#define id_avr16du32       389u
#define id_avr16ea32       334u
#define id_avr16eb32       383u
#define id_avr16ea48       335u
#define id_avr32dd14       336u
#define id_avr32du14       390u
#define id_avr32dd20       337u
#define id_avr32du20       391u
#define id_avr32da28       338u
#define id_avr32db28       339u
#define id_avr32dd28       340u
#define id_avr32du28       392u
#define id_avr32ea28       341u
#define id_avr32da32       342u
#define id_avr32db32       343u
#define id_avr32dd32       344u
#define id_avr32du32       393u
#define id_avr32ea32       345u
#define id_avr32da48       346u
#define id_avr32db48       347u
#define id_avr32ea48       348u
#define id_avr64dd14       349u
#define id_avr64dd20       350u
#define id_avr64da28       351u
#define id_avr64db28       352u
#define id_avr64dd28       353u
#define id_avr64du28       384u
#define id_avr64ea28       354u
#define id_avr64da32       355u
#define id_avr64db32       356u
#define id_avr64dd32       357u
#define id_avr64du32       385u
#define id_avr64ea32       358u
#define id_avr64da48       359u
#define id_avr64db48       360u
#define id_avr64ea48       361u
#define id_avr64da64       362u
#define id_avr64db64       363u
#define id_avr128da28      364u
#define id_avr128db28      365u
#define id_avr128da32      366u
#define id_avr128db32      367u
#define id_avr128da48      368u
#define id_avr128db48      369u
#define id_avr128da64      370u
#define id_avr128db64      371u


// Suggested vector bootloader interrupt: first unused vector or slot just above vector table

#define vbu_attiny4          10
#define vbu_attiny5          11
#define vbu_attiny9          10
#define vbu_attiny10         11
#define vbu_attiny20         17
#define vbu_attiny40         18
#define vbu_attiny102        16
#define vbu_attiny104        16
#define vbu_attiny11          5
#define vbu_attiny12          6
#define vbu_attiny13         10
#define vbu_attiny13a        10
#define vbu_attiny15          9
#define vbu_attiny22          3
#define vbu_attiny24         17
#define vbu_attiny24a        17
#define vbu_attiny25         15
#define vbu_attiny26         12
#define vbu_attiny28          6
#define vbu_attiny43u        16
#define vbu_attiny44         17
#define vbu_attiny44a        17
#define vbu_attiny45         15
#define vbu_attiny48         20
#define vbu_attiny84         17
#define vbu_attiny84a        17
#define vbu_attiny85         15
#define vbu_attiny87         20
#define vbu_attiny88         20
#define vbu_attiny167        20
#define vbu_attiny261        19
#define vbu_attiny261a       19
#define vbu_attiny441        30
#define vbu_attiny461        19
#define vbu_attiny461a       19
#define vbu_attiny828        26
#define vbu_attiny828r       26
#define vbu_attiny841        30
#define vbu_attiny861        19
#define vbu_attiny861a       19
#define vbu_attiny1634       28
#define vbu_attiny1634r      28
#define vbu_attiny2313       19
#define vbu_attiny2313a      21
#define vbu_attiny4313       21
#define vbu_atmega8          19
#define vbu_atmega8a         19
#define vbu_atmega8hva       21
#define vbu_atmega8u2        29
#define vbu_atmega16         21
#define vbu_atmega16a        21
#define vbu_atmega16hva      21
#define vbu_atmega16hvb      29
#define vbu_atmega16hvbrevb  29
#define vbu_atmega16m1       31
#define vbu_atmega16hva2     22
#define vbu_atmega16u2       29
#define vbu_atmega16u4        5
#define vbu_atmega32         21
#define vbu_atmega32a        21
#define vbu_atmega32hvb      29
#define vbu_atmega32hvbrevb  29
#define vbu_atmega32c1       31
#define vbu_atmega32m1       31
#define vbu_atmega32hve2     25
#define vbu_atmega32u2       29
#define vbu_atmega32u4        5
#define vbu_atmega32u6       38
#define vbu_atmega48         26
#define vbu_atmega48a        26
#define vbu_atmega48p        26
#define vbu_atmega48pa       26
#define vbu_atmega48pb       27
#define vbu_atmega64         35
#define vbu_atmega64a        35
#define vbu_atmega64hve      25
#define vbu_atmega64c1       31
#define vbu_atmega64m1       31
#define vbu_atmega64hve2     25
#define vbu_atmega64rfr2     51
#define vbu_atmega88         26
#define vbu_atmega88a        26
#define vbu_atmega88p        26
#define vbu_atmega88pa       26
#define vbu_atmega88pb       27
#define vbu_atmega103        24
#define vbu_atmega128        35
#define vbu_atmega128a       35
#define vbu_atmega128rfa1    51
#define vbu_atmega128rfr2    51
#define vbu_atmega161        21
#define vbu_atmega162        28
#define vbu_atmega163        18
#define vbu_atmega164a       31
#define vbu_atmega164p       31
#define vbu_atmega164pa      31
#define vbu_atmega165        22
#define vbu_atmega165a       22
#define vbu_atmega165p       22
#define vbu_atmega165pa      22
#define vbu_atmega168        26
#define vbu_atmega168a       26
#define vbu_atmega168p       26
#define vbu_atmega168pa      26
#define vbu_atmega168pb      27
#define vbu_atmega169        23
#define vbu_atmega169a       23
#define vbu_atmega169p       23
#define vbu_atmega169pa      23
#define vbu_atmega256rfr2    51
#define vbu_atmega323        21
#define vbu_atmega324a       31
#define vbu_atmega324p       31
#define vbu_atmega324pa      31
#define vbu_atmega324pb      51
#define vbu_atmega325        22
#define vbu_atmega325a       22
#define vbu_atmega325p       22
#define vbu_atmega325pa      22
#define vbu_atmega328        26
#define vbu_atmega328p       26
#define vbu_atmega328pb      45
#define vbu_atmega329        23
#define vbu_atmega329a       23
#define vbu_atmega329p       23
#define vbu_atmega329pa      23
#define vbu_atmega406        23
#define vbu_atmega640        57
#define vbu_atmega644        28
#define vbu_atmega644a       31
#define vbu_atmega644p       31
#define vbu_atmega644pa      31
#define vbu_atmega644rfr2    51
#define vbu_atmega645        22
#define vbu_atmega645a       22
#define vbu_atmega645p       22
#define vbu_atmega649        23
#define vbu_atmega649a       23
#define vbu_atmega649p       23
#define vbu_atmega1280       57
#define vbu_atmega1281       51
#define vbu_atmega1284       35
#define vbu_atmega1284p      35
#define vbu_atmega1284rfr2   51
#define vbu_atmega2560       57
#define vbu_atmega2561       51
#define vbu_atmega2564rfr2   51
#define vbu_atmega3250       22
#define vbu_atmega3250a      22
#define vbu_atmega3250p      22
#define vbu_atmega3250pa     22
#define vbu_atmega3290       25
#define vbu_atmega3290a      25
#define vbu_atmega3290p      25
#define vbu_atmega3290pa     25
#define vbu_atmega6450       22
#define vbu_atmega6450a      22
#define vbu_atmega6450p      22
#define vbu_atmega6490       25
#define vbu_atmega6490a      25
#define vbu_atmega6490p      25
#define vbu_atmega8515       17
#define vbu_atmega8535       21
#define vbu_at86rf401         3
#define vbu_at90pwm1         14
#define vbu_at90pwm2         14
#define vbu_at90pwm2b        14
#define vbu_at90pwm3         14
#define vbu_at90pwm3b        14
#define vbu_at90can32        37
#define vbu_at90can64        37
#define vbu_at90pwm81        20
#define vbu_at90usb82        29
#define vbu_at90scr100       24
#define vbu_at90scr100h      24
#define vbu_at90can128       37
#define vbu_at90pwm161       20
#define vbu_at90usb162       29
#define vbu_at90pwm216       14
#define vbu_at90pwm316       14
#define vbu_at90usb646       38
#define vbu_at90usb647       38
#define vbu_at90s1200         4
#define vbu_at90usb1286      38
#define vbu_at90usb1287      38
#define vbu_at90s2313        11
#define vbu_at90s2323         3
#define vbu_at90s2333        14
#define vbu_at90s2343         3
#define vbu_at90s4414        13
#define vbu_at90s4433        14
#define vbu_at90s4434        17
#define vbu_at90s8515        13
#define vbu_at90s8535        17
#define vbu_ata5272          17
#define vbu_ata5505          20
#define vbu_ata5700m322      51
#define vbu_ata5702m322      51
#define vbu_ata5781          42
#define vbu_ata5782          42
#define vbu_ata5783          42
#define vbu_ata5787          44
#define vbu_ata5790          30
#define vbu_ata5790n         31
#define vbu_ata5791          31
#define vbu_ata5795          23
#define vbu_ata5831          42
#define vbu_ata5832          42
#define vbu_ata5833          42
#define vbu_ata5835          44
#define vbu_ata6285          27
#define vbu_ata6286          27
#define vbu_ata6289          27
#define vbu_ata6612c         26
#define vbu_ata6613c         26
#define vbu_ata6614q         26
#define vbu_ata6616c         20
#define vbu_ata6617c         20
#define vbu_ata8210          42
#define vbu_ata8215          42
#define vbu_ata8510          42
#define vbu_ata8515          42
#define vbu_ata664251        20
#define vbu_lgt8f88p         26
#define vbu_lgt8f168p        26
#define vbu_lgt8f328p        26
#define vbu_atxmega8e5       43
#define vbu_atxmega16a4      36
#define vbu_atxmega16a4u     36
#define vbu_atxmega16c4       6
#define vbu_atxmega16d4       6
#define vbu_atxmega16e5      43
#define vbu_atxmega32c3       6
#define vbu_atxmega32d3       6
#define vbu_atxmega32a4      36
#define vbu_atxmega32a4u     36
#define vbu_atxmega32c4       6
#define vbu_atxmega32d4       6
#define vbu_atxmega32e5      43
#define vbu_atxmega64a1     102
#define vbu_atxmega64a1u    102
#define vbu_atxmega64b1       8
#define vbu_atxmega64a3      75
#define vbu_atxmega64a3u     75
#define vbu_atxmega64b3       8
#define vbu_atxmega64c3       6
#define vbu_atxmega64d3       6
#define vbu_atxmega64a4u     36
#define vbu_atxmega64d4       6
#define vbu_atxmega128a1    102
#define vbu_atxmega128a1revd 102
#define vbu_atxmega128a1u   102
#define vbu_atxmega128b1      8
#define vbu_atxmega128a3     75
#define vbu_atxmega128a3u    75
#define vbu_atxmega128b3      8
#define vbu_atxmega128c3      6
#define vbu_atxmega128d3      6
#define vbu_atxmega128a4u    36
#define vbu_atxmega128d4      6
#define vbu_atxmega192a3     75
#define vbu_atxmega192a3u    75
#define vbu_atxmega192c3      6
#define vbu_atxmega192d3      6
#define vbu_atxmega256a3     75
#define vbu_atxmega256a3b    57
#define vbu_atxmega256a3bu   57
#define vbu_atxmega256a3u    75
#define vbu_atxmega256c3      6
#define vbu_atxmega256d3      6
#define vbu_atxmega384c3      8
#define vbu_atxmega384d3      6
#define vbu_attiny202         4
#define vbu_attiny204         5
#define vbu_attiny212         4
#define vbu_attiny214         5
#define vbu_attiny402         4
#define vbu_attiny404         5
#define vbu_attiny406        14
#define vbu_attiny412         4
#define vbu_attiny414         5
#define vbu_attiny416        26
#define vbu_attiny416auto    26
#define vbu_attiny417        26
#define vbu_attiny424        30
#define vbu_attiny426        30
#define vbu_attiny427        30
#define vbu_attiny804        14
#define vbu_attiny806        14
#define vbu_attiny807        14
#define vbu_attiny814         5
#define vbu_attiny816        26
#define vbu_attiny817        26
#define vbu_attiny824        30
#define vbu_attiny826        30
#define vbu_attiny827        30
#define vbu_attiny1604       14
#define vbu_attiny1606       14
#define vbu_attiny1607       14
#define vbu_attiny1614        5
#define vbu_attiny1616       31
#define vbu_attiny1617       31
#define vbu_attiny1624       30
#define vbu_attiny1626       30
#define vbu_attiny1627       30
#define vbu_attiny3214       31
#define vbu_attiny3216       31
#define vbu_attiny3217       31
#define vbu_attiny3224       30
#define vbu_attiny3226       30
#define vbu_attiny3227       30
#define vbu_atmega808        36
#define vbu_atmega809        40
#define vbu_atmega1608       36
#define vbu_atmega1609       40
#define vbu_atmega3208       36
#define vbu_atmega3209       40
#define vbu_atmega4808       36
#define vbu_atmega4809       40
#define vbu_avr16dd14        36
#define vbu_avr16du14        34
#define vbu_avr16eb14        31
#define vbu_avr16dd20        36
#define vbu_avr16du20        34
#define vbu_avr16eb20        31
#define vbu_avr16dd28        36
#define vbu_avr16du28        34
#define vbu_avr16ea28        37
#define vbu_avr16eb28        31
#define vbu_avr16dd32        36
#define vbu_avr16du32        34
#define vbu_avr16ea32        37
#define vbu_avr16eb32        31
#define vbu_avr16ea48        45
#define vbu_avr32dd14        36
#define vbu_avr32du14        34
#define vbu_avr32dd20        36
#define vbu_avr32du20        34
#define vbu_avr32da28        41
#define vbu_avr32db28        42
#define vbu_avr32dd28        36
#define vbu_avr32du28        34
#define vbu_avr32ea28        37
#define vbu_avr32da32        41
#define vbu_avr32db32        44
#define vbu_avr32dd32        36
#define vbu_avr32du32        34
#define vbu_avr32ea32        37
#define vbu_avr32da48        58
#define vbu_avr32db48        59
#define vbu_avr32ea48        45
#define vbu_avr64dd14        36
#define vbu_avr64dd20        36
#define vbu_avr64da28        41
#define vbu_avr64db28        42
#define vbu_avr64dd28        36
#define vbu_avr64du28        34
#define vbu_avr64ea28        37
#define vbu_avr64da32        41
#define vbu_avr64db32        44
#define vbu_avr64dd32        36
#define vbu_avr64du32        34
#define vbu_avr64ea32        37
#define vbu_avr64da48        58
#define vbu_avr64db48        59
#define vbu_avr64ea48        45
#define vbu_avr64da64        64
#define vbu_avr64db64        65
#define vbu_avr128da28       41
#define vbu_avr128db28       42
#define vbu_avr128da32       41
#define vbu_avr128db32       44
#define vbu_avr128da48       58
#define vbu_avr128db48       59
#define vbu_avr128da64       64
#define vbu_avr128db64       65

#endif
