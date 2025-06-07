#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Margin.hpp"
#include "PanelSlot.hpp"
#include "SlateChildSize.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct HorizontalBoxSlot : public PanelSlot {
    private: char pad_38[0x28]; public:
    void* get_Padding();
    void* get_Size();
    void* get_HorizontalAlignment();
    void* get_VerticalAlignment();
    static _Script_CoreUObject::Class* static_class();
    void SetVerticalAlignment(void* InVerticalAlignment);
    void SetSize(_Script_UMG::SlateChildSize InSize);
    void SetPadding(_Script_SlateCore::Margin InPadding);
    void SetHorizontalAlignment(void* InHorizontalAlignment);
}; // Size: 0x60
#pragma pack(pop)
}
