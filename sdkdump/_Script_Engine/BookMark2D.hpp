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
struct BookMark2D : public BookmarkBase {
    private: char pad_28[0x10]; public:
    float& get_Zoom2D();
    void* get_Location();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
