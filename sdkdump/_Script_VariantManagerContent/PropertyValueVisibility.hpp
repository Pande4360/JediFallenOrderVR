#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PropertyValue.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct PropertyValueVisibility : public PropertyValue {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
