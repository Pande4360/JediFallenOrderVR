#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_Foliage {
struct ProceduralFoliageVolume;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct ProceduralFoliageBlockingVolume : public _Script_Engine::Volume {
    private: char pad_398[0x8]; public:
    _Script_Foliage::ProceduralFoliageVolume*& get_ProceduralFoliageVolume();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a0
#pragma pack(pop)
}
