#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapStaticMeshComponent : public _Script_Engine::StaticMeshComponent {
    int32_t& get_MapLayer();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xbd0
#pragma pack(pop)
}
