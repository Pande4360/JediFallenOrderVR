#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_Credits_UI_CreditsCore\UI_CreditsCore_C.hpp"
#include "UI_CreditsWindow_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
_Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow::UI_CreditsWindow_C::get_UI_CreditsCore() {
    return *(_Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C**)((uintptr_t)this + 0x618);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow::UI_CreditsWindow_C::get_MenuCredits() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x610);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow::UI_CreditsWindow_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow::UI_CreditsWindow_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_CreditsWindow.UI_CreditsWindow_C");
    return result;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow::UI_CreditsWindow_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow::UI_CreditsWindow_C::UIMenuCreditsCompleted() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow::UI_CreditsWindow_C::OnWindowOpened0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow::UI_CreditsWindow_C::OnCancel(void* ActionName) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow::UI_CreditsWindow_C::ExecuteUbergraph_UI_CreditsWindow(int32_t EntryPoint) {
    return;
}
