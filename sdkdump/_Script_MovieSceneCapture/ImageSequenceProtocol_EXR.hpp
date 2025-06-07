#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ImageSequenceProtocol.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct ImageSequenceProtocol_EXR : public ImageSequenceProtocol {
    private: char pad_d8[0x10]; public:
    bool get_bCompressed();
    void set_bCompressed(bool value);
    void* get_CaptureGamut();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
