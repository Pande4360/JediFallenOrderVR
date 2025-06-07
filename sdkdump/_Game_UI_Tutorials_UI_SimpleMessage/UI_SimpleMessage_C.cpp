#include "..\FUObjectArray.hpp"
#include "UI_SimpleMessage_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
float& _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_Delay() {
    return *(float*)((uintptr_t)this + 0x250);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_Texttojump() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x228);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void* _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_Text() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_UMG::Border*& _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x220);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::VerticalBox*& _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_VerticalBox_0() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x230);
}
bool _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_StayForever() {
    return (*(uint8_t*)((uintptr_t)this + 0x254 + 0)) & 1 != 0;
}
void _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::set_StayForever(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x254 + 0);
    *(uint8_t*)((uintptr_t)this + 0x254 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_Dismissed() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Tutorials/UI_SimpleMessage.UI_SimpleMessage_C");
    return result;
}
void* _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::get_DismissTimer() {
    return (void*)((uintptr_t)this + 0x268);
}
void _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::FadeInFinished() {
    return;
}
void _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::FadeOutFinished() {
    return;
}
void _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::ShowMessage() {
    return;
}
void _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::Dismiss() {
    return;
}
void _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::Construct0() {
    return;
}
void _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::ExecuteUbergraph_UI_SimpleMessage(int32_t EntryPoint) {
    return;
}
void _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C::Dismissed__DelegateSignature() {
    return;
}
