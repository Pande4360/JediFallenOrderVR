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
struct ImageSequenceProtocol_BMP : public ImageSequenceProtocol {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
