#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsInstanceMergedActor : public Actor {
    private: char pad_360[0x18]; public:
    _Script_Engine::StaticMeshComponent*& get_ProxyLODComponent();
    void* get_MergedMeshComponents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x378
#pragma pack(pop)
}
