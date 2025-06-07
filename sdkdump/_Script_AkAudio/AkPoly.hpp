#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AkAudio {
struct AkAcousticTexture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkPoly {
    private: char pad_0[0x10]; public:
    _Script_AkAudio::AkAcousticTexture*& get_Texture();
    bool get_EnableSurface();
    void set_EnableSurface(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
