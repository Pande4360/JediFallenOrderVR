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
struct GridSlot : public PanelSlot {
    private: char pad_38[0x38]; public:
    void* get_Padding();
    void* get_HorizontalAlignment();
    void* get_VerticalAlignment();
    int32_t& get_Row();
    int32_t& get_RowSpan();
    int32_t& get_Column();
    int32_t& get_ColumnSpan();
    int32_t& get_Layer();
    void* get_Nudge();
    static _Script_CoreUObject::Class* static_class();
    void SetVerticalAlignment(void* InVerticalAlignment);
    void SetRowSpan(int32_t InRowSpan);
    void SetRow(int32_t InRow);
    void SetPadding(_Script_SlateCore::Margin InPadding);
    void SetLayer(int32_t InLayer);
    void SetHorizontalAlignment(void* InHorizontalAlignment);
    void SetColumnSpan(int32_t InColumnSpan);
    void SetColumn(int32_t InColumn);
}; // Size: 0x70
#pragma pack(pop)
}
