#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsDirectionalAnimData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAttackerDirectionBasedAnimData : public RsDirectionalAnimData {
    private: char pad_30[0x98]; public:
    void* get_DirectionalAnimationDataMapping();
    void* get_DefaultAnimation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
