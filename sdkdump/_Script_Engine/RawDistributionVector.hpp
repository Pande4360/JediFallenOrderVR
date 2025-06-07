#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RawDistribution.hpp"
namespace _Script_Engine {
struct DistributionVector;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RawDistributionVector : public RawDistribution {
    private: char pad_28[0x28]; public:
    float& get_MinValue();
    float& get_MaxValue();
    void* get_MinValueVec();
    void* get_MaxValueVec();
    _Script_Engine::DistributionVector*& get_Distribution();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
