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
struct DatasmithSceneComponentTemplate : public DatasmithObjectTemplate {
    private: char pad_28[0xb8]; public:
    void* get_RelativeTransform();
    void* get_Mobility();
    void* get_AttachParent();
    void* get_Tags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
