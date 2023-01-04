//
// Created by drake on 24/8/22.
//

#ifndef DMGB_CONSTANTS_HPP
#define DMGB_CONSTANTS_HPP

#include <array>
#include <vector>
#include <iostream>

using std::vector;
using std::cout;

using byte = uint8_t;
using s_byte = int8_t;
using word = uint16_t;

constexpr word div_address = 0xFF04;
constexpr word timer_counter_address = 0xFF05;
constexpr word timer_modulo_address = 0xFF06;
constexpr word timer_control_address = 0xFF07;

constexpr word interrupt_request_address = 0xFF0F;
constexpr word lcd_control = 0xFF40;
constexpr word scy_address = 0xFF42;
constexpr word scx_address = 0xFF43;
constexpr word ly_address = 0xFF44;

constexpr word dma_address = 0xFF46;
constexpr word bgp_palette = 0xFF47;

constexpr word wy_address = 0xFF4A;
constexpr word wx_address = 0xFF4B;
#endif //DMGB_CONSTANTS_HPP