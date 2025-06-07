#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ImageWriteQueue {
#pragma pack(push, 1)
struct ImageWriteOptions {
    private: char pad_0[0x60]; public:
    void* get_Format();
    void* get_OnComplete();
    int32_t& get_CompressionQuality();
    bool get_bOverwriteFile();
    void set_bOverwriteFile(bool value);
    bool get_bAsync();
    void set_bAsync(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
