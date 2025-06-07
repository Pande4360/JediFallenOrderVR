#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct HLODProxy;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LODActor : public Actor {
    private: char pad_360[0x50]; public:
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent();
    _Script_Engine::HLODProxy*& get_Proxy();
    void* get_Key();
    float& get_LODDrawDistance();
    void* get_SubActors();
    int32_t& get_LODLevel();
    void* get_CachedNumHLODLevels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3b0
#pragma pack(pop)
}
