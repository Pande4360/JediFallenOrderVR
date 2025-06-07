#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithObjectTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithActorTemplate : public DatasmithObjectTemplate {
    private: char pad_28[0xa0]; public:
    void* get_Layers();
    void* get_Tags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
