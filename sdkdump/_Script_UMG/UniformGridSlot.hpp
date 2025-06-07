#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PanelSlot.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct UniformGridSlot : public PanelSlot {
    private: char pad_38[0x18]; public:
    void* get_HorizontalAlignment();
    void* get_VerticalAlignment();
    int32_t& get_Row();
    int32_t& get_Column();
    static _Script_CoreUObject::Class* static_class();
    void SetVerticalAlignment(void* InVerticalAlignment);
    void SetRow(int32_t InRow);
    void SetHorizontalAlignment(void* InHorizontalAlignment);
    void SetColumn(int32_t InColumn);
}; // Size: 0x50
#pragma pack(pop)
}
