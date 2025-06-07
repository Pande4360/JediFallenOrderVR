#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Widgets_UI_AbilityNode {
#pragma pack(push, 1)
struct UI_AbilityNode_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0xd8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_PulseLoop();
    _Script_UMG::Image*& get_AbilityIcon();
    _Script_UMG::Image*& get_Backing();
    _Script_UMG::Image*& get_Frame();
    _Script_UMG::Image*& get_Pulse();
    _Script_UMG::Image*& get_Selector();
    _Script_Engine::Texture2D*& get_Icon();
    _Script_Engine::Texture2D*& get_FocusedIcon();
    void* get_Name();
    void* get_Description();
    bool get_HasUnlockFlag();
    void set_HasUnlockFlag(bool value);
    bool get_CalAbility();
    void set_CalAbility(bool value);
    void* get_PrimaryInput();
    void* get_DefaultColor();
    void* get_FocusedColor();
    void* get_AbilityID();
    void* get_CombatTip();
    void* get_SecondaryInput();
    bool get_HasUpgradeFlag();
    void set_HasUpgradeFlag(bool value);
    void* get_UpgradeTip();
    static _Script_CoreUObject::Class* static_class();
    void UpdateFocusState(bool Focused);
    void OnFocused0();
    void OnUnfocused0();
    void UpdateAbilityStatus();
    void ExecuteUbergraph_UI_AbilityNode(int32_t EntryPoint);
}; // Size: 0x330
#pragma pack(pop)
}
