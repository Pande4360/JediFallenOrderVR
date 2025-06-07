#include "..\FUObjectArray.hpp"
#include "UI_ShortcutToast2_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Zone_MessageText\Zone_MessageText_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::Dismissed__DelegateSignature() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_TactGuideIntro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::TextBlock*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_DataType() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x638);
}
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::SetUnlockable(_Script_GameplayTags::GameplayTagContainer UnlockableTag) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_Outtro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Script_UMG::Image*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_DataTypeImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x640);
}
_Script_UMG::TextBlock*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_BodyCopy() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x628);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_CanvasPanel_3() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x630);
}
_Script_UMG::Image*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x648);
}
_Script_UMG::Image*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_Ring() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x650);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_NoButtonSelected() {
    return (void*)((uintptr_t)this + 0x710);
}
_Script_UMG::TextBlock*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_TitleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x658);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_Text() {
    return (void*)((uintptr_t)this + 0x660);
}
bool _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_ShowButton() {
    return (*(uint8_t*)((uintptr_t)this + 0x678 + 0)) & 1 != 0;
}
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::set_ShowButton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x678 + 0);
    *(uint8_t*)((uintptr_t)this + 0x678 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C*& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_zone() {
    return *(_Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C**)((uintptr_t)this + 0x680);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_xboxPrompt() {
    return (void*)((uintptr_t)this + 0x688);
}
int32_t& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_TextMaxLength() {
    return *(int32_t*)((uintptr_t)this + 0x798);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_BodyTextData() {
    return (void*)((uintptr_t)this + 0x7a0);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_MessageQueue() {
    return (void*)((uintptr_t)this + 0x970);
}
bool _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_NewVar_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b8 + 0)) & 1 != 0;
}
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::set_NewVar_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_SpeedX() {
    return *(float*)((uintptr_t)this + 0x7bc);
}
float& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_Overal_Glint_Speed() {
    return *(float*)((uintptr_t)this + 0x7c0);
}
_Script_SlateCore::SlateBrush _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::Get_button_Brush_0() {
    return;
}
float& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_U_Speed() {
    return *(float*)((uintptr_t)this + 0x7c4);
}
float& _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_V_Speed() {
    return *(float*)((uintptr_t)this + 0x7c8);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_ClickThroughGameMenuURL() {
    return (void*)((uintptr_t)this + 0x7d0);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_DatabankType() {
    return (void*)((uintptr_t)this + 0x7d8);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_TruncatedText() {
    return (void*)((uintptr_t)this + 0x7e0);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x7f0);
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::get_Dismissed() {
    return (void*)((uintptr_t)this + 0x960);
}
_Script_CoreUObject::Class* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_ShortcutToast2.UI_ShortcutToast2_C");
    return result;
}
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::AddMessageToQueue(_Script_GameplayTags::GameplayTagContainer UnlockableTag) {
    return;
}
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::SetBodyText(void* NewBodyText) {
    return;
}
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::GetTruncatedText(void* TextToTruncate, void*& Truncated) {
    return;
}
void* _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::GetText_0() {
    return;
}
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::Construct() {
    return;
}
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_UI_ShortcutToast2::UI_ShortcutToast2_C::ExecuteUbergraph_UI_ShortcutToast2(int32_t EntryPoint) {
    return;
}
