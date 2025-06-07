#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CompressedImageSequenceProtocol.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct ImageSequenceProtocol_PNG : public CompressedImageSequenceProtocol {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
