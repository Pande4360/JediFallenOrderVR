#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VirtualTextureSpace : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    void* get_Layers();
    int32_t& get_TileSize();
    int32_t& get_BorderWidth();
    int32_t& get_Size();
    int32_t& get_Dimensions();
    void* get_Format();
    int32_t& get_PoolSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
