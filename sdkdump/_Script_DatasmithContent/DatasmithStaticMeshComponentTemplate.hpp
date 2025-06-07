#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithSceneComponentTemplate.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithStaticMeshComponentTemplate : public DatasmithSceneComponentTemplate {
    private: char pad_e0[0x20]; public:
    _Script_Engine::StaticMesh*& get_StaticMesh();
    void* get_OverrideMaterials();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
