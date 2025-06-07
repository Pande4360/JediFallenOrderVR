#include "..\FUObjectArray.hpp"
#include "UI_Widget_PipHolder_Pip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder_Pip::UI_Widget_PipHolder_Pip_C::get_PipImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder_Pip::UI_Widget_PipHolder_Pip_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x210);
}
void* _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder_Pip::UI_Widget_PipHolder_Pip_C::get_CurrentPipState() {
    return (void*)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder_Pip::UI_Widget_PipHolder_Pip_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Widgets/UI_Widget_PipHolder_Pip.UI_Widget_PipHolder_Pip_C");
    return result;
}
void _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder_Pip::UI_Widget_PipHolder_Pip_C::UpdatePipState(void* NewPipState, bool Unread) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder_Pip::UI_Widget_PipHolder_Pip_C::UpdateUnreadState(bool Unread, bool& UnreadFlag) {
    return;
}
