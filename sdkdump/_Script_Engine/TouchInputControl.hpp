#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TouchInputControl {
    private: char pad_0[0x68]; public:
    _Script_Engine::Texture2D*& get_Image1();
    _Script_Engine::Texture2D*& get_Image2();
    void* get_Center();
    void* get_VisualSize();
    void* get_ThumbSize();
    void* get_InteractionSize();
    void* get_InputScale();
    void* get_MainInputKey();
    void* get_AltInputKey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
