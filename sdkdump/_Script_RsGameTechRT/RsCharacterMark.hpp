#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCharacterMark : public _Script_Engine::TableRowBase {
    private: char pad_8[0x58]; public:
    void* get_Texture();
    _Script_Engine::Texture2D*& get_TexturePtr();
    void* get_SourceCoords();
    void* get_DestMask();
    float& get_DestSize();
    int32_t& get_UVChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
