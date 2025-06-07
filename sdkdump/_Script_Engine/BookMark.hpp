#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BookmarkBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BookMark : public BookmarkBase {
    private: char pad_28[0x28]; public:
    void* get_Location();
    void* get_Rotation();
    void* get_HiddenLevels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
