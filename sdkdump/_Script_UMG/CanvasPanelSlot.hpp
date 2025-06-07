#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Slate\Anchors.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "AnchorData.hpp"
#include "PanelSlot.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct CanvasPanelSlot : public PanelSlot {
    private: char pad_38[0x38]; public:
    void* get_LayoutData();
    bool get_bAutoSize();
    void set_bAutoSize(bool value);
    int32_t& get_ZOrder();
    static _Script_CoreUObject::Class* static_class();
    void SetZOrder(int32_t InZOrder);
    void SetSize(_Script_CoreUObject::Vector2D InSize);
    void SetPosition(_Script_CoreUObject::Vector2D InPosition);
    void SetOffsets(_Script_SlateCore::Margin InOffset);
    void SetMinimum(_Script_CoreUObject::Vector2D InMinimumAnchors);
    void SetMaximum(_Script_CoreUObject::Vector2D InMaximumAnchors);
    void SetLayout(_Script_UMG::AnchorData& InLayoutData);
    void SetAutoSize(bool InbAutoSize);
    void SetAnchors(_Script_Slate::Anchors InAnchors);
    void SetAlignment(_Script_CoreUObject::Vector2D InAlignment);
    int32_t GetZOrder();
    _Script_CoreUObject::Vector2D GetSize();
    _Script_CoreUObject::Vector2D GetPosition();
    _Script_SlateCore::Margin GetOffsets();
    _Script_UMG::AnchorData GetLayout();
    bool GetAutoSize();
    _Script_Slate::Anchors GetAnchors();
    _Script_CoreUObject::Vector2D GetAlignment();
}; // Size: 0x70
#pragma pack(pop)
}
