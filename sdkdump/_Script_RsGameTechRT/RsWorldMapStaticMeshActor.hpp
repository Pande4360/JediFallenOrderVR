#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsWorldMapActor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapStaticMeshActor : public RsWorldMapActor {
    private: char pad_368[0x30]; public:
    void* get_MeshType();
    bool get_bIsMapSectionActor();
    void set_bIsMapSectionActor(bool value);
    void* get_MapSectionTag();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x398
#pragma pack(pop)
}
