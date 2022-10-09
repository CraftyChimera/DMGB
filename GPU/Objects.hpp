//
// Created by drake on 1/10/22.
//

#ifndef DMGB_OBJECTS_HPP
#define DMGB_OBJECTS_HPP

#include "Utility.hpp"

class Object {
    std::array<std::array<byte, 8>, 8> pixel_data;

public:
    Object() = default;

    byte get_data(size_t x_pos, size_t y_pos);

    void load(std::array<byte, memory_map_size> &data, int start);
};

#endif //DMGB_OBJECTS_HPP
