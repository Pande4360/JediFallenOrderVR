#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FoliageType.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct FoliageType_InstancedStaticMesh : public FoliageType {
    private: char pad_850[0x20]; public:
    _Script_Engine::StaticMesh*& get_Mesh();
    void* get_OverrideMaterials();
    void* get_ComponentClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x870
#pragma pack(pop)
}
