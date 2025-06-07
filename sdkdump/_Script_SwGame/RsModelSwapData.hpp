#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsModelSwapData {
    private: char pad_0[0x18]; public:
    _Script_Engine::StaticMesh*& get_MeshToSwapIn();
    void* get_MaterialsToSwapIn();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
