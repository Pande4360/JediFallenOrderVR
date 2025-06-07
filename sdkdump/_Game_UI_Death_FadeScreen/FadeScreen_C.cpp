#include "..\FUObjectArray.hpp"
#include "FadeScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_UI_Death_FadeScreen::FadeScreen_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Death_FadeScreen::FadeScreen_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_UI_Death_FadeScreen::FadeScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Death/FadeScreen.FadeScreen_C");
    return result;
}
