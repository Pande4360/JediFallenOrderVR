#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
struct UI_TutorialPopUp_C;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Hero_Logic_Interfaces_iSwPlayerController {
#pragma pack(push, 1)
struct iSwPlayerController_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void OpenUITutorialPopup(int32_t ZOrder, bool DeathScreen, _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& Popup);
    void HideInteractPrompt();
    void ShowInteractPrompt(void* Type, void* Text);
    void ShowCustomTutorial(_Script_UMG::UserWidget*& Tutorial);
    void GetBPCustomizationMenuCapture(_Script_Engine::Actor*& iCustomizationMenuCapture);
}; // Size: 0x28
#pragma pack(pop)
}
