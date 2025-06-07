#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BaseMediaSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct FileMediaSource : public BaseMediaSource {
    private: char pad_38[0x28]; public:
    void* get_FilePath();
    bool get_PrecacheFile();
    void set_PrecacheFile(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetFilePath(void* Path);
}; // Size: 0x60
#pragma pack(pop)
}
