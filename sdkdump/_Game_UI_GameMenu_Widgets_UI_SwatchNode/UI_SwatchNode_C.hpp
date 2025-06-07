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
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_UI_GameMenu_Widgets_UI_SwatchNode {
#pragma pack(push, 1)
struct UI_SwatchNode_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0xe8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_PulseLoop();
    _Script_UMG::WidgetAnimation*& get_SelectedLoop();
    _Script_UMG::Image*& get_Backing();
    _Script_UMG::Image*& get_DropShadow();
    _Script_UMG::Image*& get_Pulse();
    _Script_UMG::RetainerBox*& get_RetainerBox_2();
    _Script_UMG::Image*& get_SelectedFrame();
    _Script_UMG::Image*& get_Selector();
    _Script_UMG::Image*& get_SwatchIcon();
    _Script_Engine::Texture2D*& get_Icon();
    _Script_Engine::Texture2D*& get_FocusedIcon();
    void* get_Name();
    void* get_Description();
    bool get_HasUnlockFlag();
    void set_HasUnlockFlag(bool value);
    bool get_CalAbility();
    void set_CalAbility(bool value);
    void* get_InputButton();
    void* get_DefaultColor();
    void* get_FocusedColor();
    void* get_Cosmetic();
    _Script_Engine::Texture2D*& get_SwatchTexture();
    bool get_Equipped();
    void set_Equipped(bool value);
    bool get_Focused();
    void set_Focused(bool value);
    void* get_FrameColor_Equipped();
    void* get_FrameColor_Default();
    bool get_IsLocked();
    void set_IsLocked(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateEquippedState(bool NewEquipped);
    void UpdateFocusState();
    void OnLoaded_1E283F2A45D70CACE1877FBA3686AC70(_Script_CoreUObject::Object* Loaded);
    void OnFocused0();
    void OnUnfocused0();
    void UpdateSwatchTexture(_Script_Engine::Texture2D* Swatch);
    void ShowLockedState();
    void AsyncLoadTexture(void* TextureSoftRef);
    void Construct();
    void LVL_UnfocusButton();
    void LVL_FocusButton();
    void OnFocusGroupDisabled0();
    void OnFocusGroupEnabled0();
    void OnAccepted0();
    void ExecuteUbergraph_UI_SwatchNode(int32_t EntryPoint);
}; // Size: 0x340
#pragma pack(pop)
}
