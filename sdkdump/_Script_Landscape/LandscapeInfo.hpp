#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeInfo : public _Script_CoreUObject::Object {
    private: char pad_28[0x1d8]; public:
    void* get_LandscapeActor();
    void* get_LandscapeGuid();
    int32_t& get_ComponentSizeQuads();
    int32_t& get_SubsectionSizeQuads();
    int32_t& get_ComponentNumSubsections();
    void* get_DrawScale();
    void* get_Proxies();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x200
#pragma pack(pop)
}
