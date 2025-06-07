#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Foliage {
struct FoliageType_InstancedStaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct ProceduralFoliageInstance {
    private: char pad_0[0x60]; public:
    void* get_Location();
    void* get_Rotation();
    void* get_Normal();
    float& get_Age();
    float& get_Scale();
    _Script_Foliage::FoliageType_InstancedStaticMesh*& get_Type();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
