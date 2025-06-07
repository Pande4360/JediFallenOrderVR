#include "..\FUObjectArray.hpp"
#include "UI_MessageText_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Zone_MessageText\Zone_MessageText_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_SlateCore::SlateBrush _Game_UI_Debug_UI_MessageText::UI_MessageText_C::Get_button_Brush_0() {
    return;
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_CoreUObject::Class* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Debug/UI_MessageText.UI_MessageText_C");
    return result;
}
_Script_UMG::Border*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_ButtonBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x638);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_MultipleEntries() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::ProcessMessageQueue() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_TactGuideIntro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_Outtro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Script_UMG::Image*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x668);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::TextBlock*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_BodyCopy() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x630);
}
_Script_UMG::Image*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_ButtonPrompt() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x640);
}
_Script_UMG::Image*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_Ring() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x678);
}
_Script_UMG::CanvasPanel*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_CanvasPanel_3() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x648);
}
_Script_UMG::TextBlock*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_DataType() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x650);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::GetText_0() {
    return;
}
_Script_UMG::Image*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_DataTypeImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x658);
}
float& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_U_Speed() {
    return *(float*)((uintptr_t)this + 0x7fc);
}
_Script_UMG::HorizontalBox*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_DismissContainer() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x660);
}
_Script_UMG::Image*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x670);
}
_Script_UMG::ScaleBox*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_ScaleBox_1() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x680);
}
_Script_UMG::TextBlock*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_TitleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x688);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x690);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_Text() {
    return (void*)((uintptr_t)this + 0x698);
}
bool _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_ShowButton() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b0 + 0)) & 1 != 0;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::set_ShowButton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C*& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_zone() {
    return *(_Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C**)((uintptr_t)this + 0x6b8);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_xboxPrompt() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_NoButtonSelected() {
    return (void*)((uintptr_t)this + 0x748);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x828);
}
int32_t& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_TextMaxLength() {
    return *(int32_t*)((uintptr_t)this + 0x7d0);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_BodyTextData() {
    return (void*)((uintptr_t)this + 0x7d8);
}
bool _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_HasQueueStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x9b9 + 0)) & 1 != 0;
}
bool _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_NewVar_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x7f0 + 0)) & 1 != 0;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::set_NewVar_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_SpeedX() {
    return *(float*)((uintptr_t)this + 0x7f4);
}
float& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_Overal_Glint_Speed() {
    return *(float*)((uintptr_t)this + 0x7f8);
}
float& _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_V_Speed() {
    return *(float*)((uintptr_t)this + 0x800);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_ClickThroughGameMenuURL() {
    return (void*)((uintptr_t)this + 0x808);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_DatabankType() {
    return (void*)((uintptr_t)this + 0x810);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_TruncatedText() {
    return (void*)((uintptr_t)this + 0x818);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_Dismissed() {
    return (void*)((uintptr_t)this + 0x998);
}
void* _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_MessageQueue() {
    return (void*)((uintptr_t)this + 0x9a8);
}
bool _Game_UI_Debug_UI_MessageText::UI_MessageText_C::get_IsSingleEntry() {
    return (*(uint8_t*)((uintptr_t)this + 0x9b8 + 0)) & 1 != 0;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::set_IsSingleEntry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::set_HasQueueStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::AddMessageToQueue(_Script_GameplayTags::GameplayTagContainer UnlockableTag) {
    return;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::SetUnlockable(_Script_GameplayTags::GameplayTagContainer UnlockableTag) {
    return;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::SetBodyText(void* NewBodyText) {
    return;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::GetTruncatedText(void* TextToTruncate, void*& Truncated) {
    return;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::Construct() {
    return;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::RequireButtonPress() {
    return;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::MenuClickThrough(void* ActionName) {
    return;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::UpdateScale(int32_t Value) {
    return;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::ExecuteUbergraph_UI_MessageText(int32_t EntryPoint) {
    return;
}
void _Game_UI_Debug_UI_MessageText::UI_MessageText_C::Dismissed__DelegateSignature() {
    return;
}
