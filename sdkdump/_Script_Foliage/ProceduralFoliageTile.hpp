#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Foliage {
struct ProceduralFoliageSpawner;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct ProceduralFoliageTile : public _Script_CoreUObject::Object {
    private: char pad_28[0x130]; public:
    _Script_Foliage::ProceduralFoliageSpawner*& get_FoliageSpawner();
    void* get_InstancesArray();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x158
#pragma pack(pop)
}
