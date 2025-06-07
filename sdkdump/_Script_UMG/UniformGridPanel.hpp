#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Margin.hpp"
#include "PanelWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct UniformGridSlot;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct UniformGridPanel : public PanelWidget {
    private: char pad_118[0x28]; public:
    void* get_SlotPadding();
    float& get_MinDesiredSlotWidth();
    float& get_MinDesiredSlotHeight();
    static _Script_CoreUObject::Class* static_class();
    void SetSlotPadding(_Script_SlateCore::Margin InSlotPadding);
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    _Script_UMG::UniformGridSlot* AddChildToUniformGrid(_Script_UMG::Widget* Content);
}; // Size: 0x140
#pragma pack(pop)
}
