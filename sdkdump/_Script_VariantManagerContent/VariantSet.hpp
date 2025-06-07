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
struct Variant;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct VariantSet : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_DisplayText();
    void* get_Variants();
    static _Script_CoreUObject::Class* static_class();
    void SetDisplayText(void*& NewDisplayText);
    _Script_VariantManagerContent::Variant* GetVariant(int32_t VariantIndex);
    int32_t GetNumVariants();
    void* GetDisplayText();
}; // Size: 0x50
#pragma pack(pop)
}
