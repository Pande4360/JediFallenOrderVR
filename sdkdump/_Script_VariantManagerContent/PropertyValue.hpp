#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct PropertyValue : public _Script_CoreUObject::Object {
    private: char pad_28[0xc8]; public:
    void* get_FullDisplayString();
    bool get_bHasRecordedData();
    void set_bHasRecordedData(bool value);
    bool get_bIsObjectProperty();
    void set_bIsObjectProperty(bool value);
    void* get_ValueBytes();
    void* get_PropCategory();
    void* get_Properties();
    void* get_PropertyIndices();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
