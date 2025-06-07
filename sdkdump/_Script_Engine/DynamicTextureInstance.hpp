#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "StreamableTextureInstance.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DynamicTextureInstance : public StreamableTextureInstance {
    private: char pad_28[0x10]; public:
    _Script_Engine::Texture2D*& get_Texture();
    bool get_bAttached();
    void set_bAttached(bool value);
    float& get_OriginalRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
