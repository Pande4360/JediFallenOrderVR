#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct LocalPlayer;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Console : public _Script_CoreUObject::Object {
    private: char pad_28[0xe0]; public:
    _Script_Engine::LocalPlayer*& get_ConsoleTargetPlayer();
    _Script_Engine::Texture2D*& get_DefaultTexture_Black();
    _Script_Engine::Texture2D*& get_DefaultTexture_White();
    void* get_HistoryBuffer();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
