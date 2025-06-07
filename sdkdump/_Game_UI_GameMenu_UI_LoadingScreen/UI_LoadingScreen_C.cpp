#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave\UI_StarChartAnimLoadSave_C.hpp"
#include "UI_LoadingScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
void _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::ShowLoadingScreen() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::Image*& _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::get_BlackBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x618);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::get_LoadingScreenCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x620);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave::UI_StarChartAnimLoadSave_C*& _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::get_UI_StarChartAnimLoadSave() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave::UI_StarChartAnimLoadSave_C**)((uintptr_t)this + 0x628);
}
void* _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::get_Mix_IsLoading() {
    return (void*)((uintptr_t)this + 0x630);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/UI_LoadingScreen.UI_LoadingScreen_C");
    return result;
}
void _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::HideLoadingScreen() {
    return;
}
void _Game_UI_GameMenu_UI_LoadingScreen::UI_LoadingScreen_C::ExecuteUbergraph_UI_LoadingScreen(int32_t EntryPoint) {
    return;
}
