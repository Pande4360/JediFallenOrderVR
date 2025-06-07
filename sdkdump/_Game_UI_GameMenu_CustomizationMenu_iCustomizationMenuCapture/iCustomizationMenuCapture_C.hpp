#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_CustomizationMenu_iCustomizationMenuCapture {
#pragma pack(push, 1)
struct iCustomizationMenuCapture_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void iSetInquisitorCalActiveState(bool NewActiveState, bool PonchoOn);
    void iApplyOutfit(void* Enum);
    void iEnableMantis(bool Enabled);
    void iPlayHeroPonchoAnim(bool On);
    void iApplyMantisSkin(void* Skin);
    void iApplyPonchoSkin(void* Skin);
    void iSetPonchoVisible(bool Visible);
    void iApplyBD1Skin(void* Cosmetic);
    void iResetFocus();
    void iSetCustomizationFocus(void* CosmeticType);
}; // Size: 0x28
#pragma pack(pop)
}
