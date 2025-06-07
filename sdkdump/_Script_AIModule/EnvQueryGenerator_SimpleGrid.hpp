#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryGenerator_ProjectedPoints.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryGenerator_SimpleGrid : public EnvQueryGenerator_ProjectedPoints {
    private: char pad_80[0x68]; public:
    void* get_GridSize();
    void* get_SpaceBetween();
    void* get_GenerateAround();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
