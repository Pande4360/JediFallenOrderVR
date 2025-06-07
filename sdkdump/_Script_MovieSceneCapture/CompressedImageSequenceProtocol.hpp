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
struct CompressedImageSequenceProtocol : public ImageSequenceProtocol {
    private: char pad_d8[0x8]; public:
    int32_t& get_CompressionQuality();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
