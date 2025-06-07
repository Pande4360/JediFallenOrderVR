#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Margin.hpp"
#include "PanelSlot.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WrapBoxSlot : public PanelSlot {
    private: char pad_38[0x28]; public:
    void* get_Padding();
    bool get_bFillEmptySpace();
    void set_bFillEmptySpace(bool value);
    float& get_FillSpanWhenLessThan();
    void* get_HorizontalAlignment();
    void* get_VerticalAlignment();
    static _Script_CoreUObject::Class* static_class();
    void SetVerticalAlignment(void* InVerticalAlignment);
    void SetPadding(_Script_SlateCore::Margin InPadding);
    void SetHorizontalAlignment(void* InHorizontalAlignment);
    void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
    void SetFillEmptySpace(bool InbFillEmptySpace);
}; // Size: 0x60
#pragma pack(pop)
}
