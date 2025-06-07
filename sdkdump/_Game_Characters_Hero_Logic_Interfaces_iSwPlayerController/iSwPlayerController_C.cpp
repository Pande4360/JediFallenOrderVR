#include "..\FUObjectArray.hpp"
#include "iSwPlayerController_C.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialPopUp\UI_TutorialPopUp_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Interfaces_iSwPlayerController::iSwPlayerController_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Interfaces/iSwPlayerController.iSwPlayerController_C");
    return result;
}
void _Game_Characters_Hero_Logic_Interfaces_iSwPlayerController::iSwPlayerController_C::GetBPCustomizationMenuCapture(_Script_Engine::Actor*& iCustomizationMenuCapture) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iSwPlayerController::iSwPlayerController_C::OpenUITutorialPopup(int32_t ZOrder, bool DeathScreen, _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& Popup) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iSwPlayerController::iSwPlayerController_C::HideInteractPrompt() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iSwPlayerController::iSwPlayerController_C::ShowInteractPrompt(void* Type, void* Text) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iSwPlayerController::iSwPlayerController_C::ShowCustomTutorial(_Script_UMG::UserWidget*& Tutorial) {
    return;
}
