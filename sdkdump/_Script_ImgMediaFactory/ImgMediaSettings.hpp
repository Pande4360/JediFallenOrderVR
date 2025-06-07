#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ImgMediaFactory {
#pragma pack(push, 1)
struct ImgMediaSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_DefaultFrameRate();
    float& get_CacheBehindPercentage();
    float& get_CacheSizeGB();
    int32_t& get_CacheThreads();
    int32_t& get_CacheThreadStackSizeKB();
    void* get_ExrDecoderThreads();
    void* get_DefaultProxy();
    bool get_UseDefaultProxy();
    void set_UseDefaultProxy(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
