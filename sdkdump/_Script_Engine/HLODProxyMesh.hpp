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
namespace _Script_Engine {
#pragma pack(push, 1)
struct HLODProxyMesh {
    private: char pad_0[0x30]; public:
    void* get_LODActor();
    _Script_Engine::StaticMesh*& get_StaticMesh();
    void* get_Key();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
