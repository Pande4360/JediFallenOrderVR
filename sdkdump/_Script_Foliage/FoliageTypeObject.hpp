#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
struct FoliageType_InstancedStaticMesh;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct FoliageTypeObject {
    private: char pad_0[0x20]; public:
    _Script_CoreUObject::Object*& get_FoliageTypeObject();
    _Script_Foliage::FoliageType_InstancedStaticMesh*& get_TypeInstance();
    bool get_bIsAsset();
    void set_bIsAsset(bool value);
    void* get_Type();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
