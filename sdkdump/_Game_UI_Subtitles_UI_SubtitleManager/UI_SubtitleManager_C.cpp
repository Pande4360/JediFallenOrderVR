#include "..\FUObjectArray.hpp"
#include "..\_Game_GlobalData_SwGameState\SwGameState_C.hpp"
#include "..\_Game_UI_Subtitles_UI_SubtitleItem\UI_SubtitleItem_C.hpp"
#include "UI_SubtitleManager_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_UI_SubtitleItem_4() {
    return *(_Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C**)((uintptr_t)this + 0x790);
}
float& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_DialogChoiceTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x848);
}
void* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_Background() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x638);
}
_Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_UI_SubtitleItem_1() {
    return *(_Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C**)((uintptr_t)this + 0x778);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_Select2() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_Select1() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PSOption1() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x708);
}
_Script_UMG::CanvasPanel*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PCSelection() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x6f8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
int32_t& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_CurrentChoiceNumberForTags() {
    return *(int32_t*)((uintptr_t)this + 0x86c);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_Select0() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_OnLoad() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x630);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_BottomSelect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x640);
}
_Script_UMG::TextBlock*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_Choice0() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x648);
}
bool _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ChoiceMade() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a0 + 0)) & 1 != 0;
}
_Script_UMG::TextBlock*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_Choice1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x650);
}
_Script_UMG::TextBlock*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_Choice2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x658);
}
_Script_UMG::TextBlock*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_Choice3() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x660);
}
float& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_DialogChoicePercentRemaining_1() {
    return *(float*)((uintptr_t)this + 0x858);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_Gradient() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x668);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_XBOption1() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x7b0);
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::UpdateElementPositionsForHUD(float HUDVerticalBoxHeight) {
    return;
}
_Script_UMG::WidgetSwitcher*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_InputSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x670);
}
_Script_Engine::PlayerController*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PlayerController() {
    return *(_Script_Engine::PlayerController**)((uintptr_t)this + 0x838);
}
_Script_UMG::CanvasPanel*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_InteractionChoicePanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x678);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_LeftSelect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x680);
}
float& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_DialogChoicePercentRemaining() {
    return *(float*)((uintptr_t)this + 0x850);
}
_Script_UMG::Border*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_LetterBoxChoice0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x688);
}
_Script_UMG::Border*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_LetterBoxChoice1() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x690);
}
_Script_UMG::Border*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_LetterBoxChoice2() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x698);
}
_Script_UMG::Border*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_LetterBoxChoice3() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x6a0);
}
_Script_UMG::Border*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_LetterBoxRadioName() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x6a8);
}
_Script_UMG::Border*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_LetterBoxRadioText() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::VerticalBox*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_LineListBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x6b8);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PCBottomSelect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6c0);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PCLeftSelect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6c8);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PCOption0() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x6d0);
}
int32_t& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_CurrentRadioSpeakerLine() {
    return *(int32_t*)((uintptr_t)this + 0x8a4);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PCOption1() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x6d8);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PCOption2() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x6e0);
}
void* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ChoiceAnims() {
    return (void*)((uintptr_t)this + 0x870);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PCOption3() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x6e8);
}
_Script_RsGameTechRT::RsConversation*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_CurrentConversationForChoice() {
    return *(_Script_RsGameTechRT::RsConversation**)((uintptr_t)this + 0x840);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PCRightSelect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6f0);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PSOption0() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x700);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PSOption2() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x710);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PSOption3() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x718);
}
_Script_UMG::CanvasPanel*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_PSSelection() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x720);
}
_Script_UMG::CanvasPanel*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_RadioSpeakerNamePanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x728);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_RightSelect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x730);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_XBOption0() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x7a8);
}
_Script_UMG::ScaleBox*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ScaleChoice0() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x738);
}
_Script_UMG::CanvasPanel*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_XboxSelection() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x7c8);
}
_Script_UMG::ScaleBox*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ScaleChoice1() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x740);
}
_Script_UMG::ScaleBox*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ScaleChoice2() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x748);
}
_Script_UMG::ScaleBox*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ScaleChoice3() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x750);
}
_Script_UMG::ScaleBox*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ScaleRadioName() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x758);
}
_Script_UMG::ScaleBox*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ScaleRadioText() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x760);
}
_Script_UMG::CanvasPanel*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_SubtitlesPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x768);
}
_Script_UMG::TextBlock*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_txtRadioSpeakerName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x770);
}
_Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_UI_SubtitleItem_3() {
    return *(_Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C**)((uintptr_t)this + 0x788);
}
_Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_UI_SubtitleItem_2() {
    return *(_Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C**)((uintptr_t)this + 0x780);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_XBBottomSelect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x798);
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_XBLeftSelect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x7a0);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_XBOption2() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x7b8);
}
_Script_UMG::ProgressBar*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_XBOption3() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x7c0);
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::DebugLog(void* Message, float Duration) {
    return;
}
_Script_UMG::Image*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_XBRightSelect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x7d0);
}
void* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_CurrentLines() {
    return (void*)((uintptr_t)this + 0x7d8);
}
void* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ChoiceEntries() {
    return (void*)((uintptr_t)this + 0x828);
}
int32_t& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_CurrentChoiceCount() {
    return *(int32_t*)((uintptr_t)this + 0x84c);
}
float& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_DialogChoicePercentRemaining_0() {
    return *(float*)((uintptr_t)this + 0x854);
}
float& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_DialogChoicePercentRemaining_2() {
    return *(float*)((uintptr_t)this + 0x85c);
}
float& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_DialogChoicePercentRemaining_3() {
    return *(float*)((uintptr_t)this + 0x860);
}
float& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_DialogChoiceTimeDefault() {
    return *(float*)((uintptr_t)this + 0x864);
}
int32_t& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_DefaultDialogueChoiceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x868);
}
void* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_LineItems() {
    return (void*)((uintptr_t)this + 0x880);
}
void* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_SubtitleTexts() {
    return (void*)((uintptr_t)this + 0x890);
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::set_ChoiceMade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_CachedYHeight() {
    return *(float*)((uintptr_t)this + 0x8a8);
}
void* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_ChoiceLetterBoxes() {
    return (void*)((uintptr_t)this + 0x8b0);
}
bool _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_CurrentVisibilitySetting() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c0 + 0)) & 1 != 0;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::set_CurrentVisibilitySetting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_InInteractionChoice() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c1 + 0)) & 1 != 0;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::set_InInteractionChoice(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_GlobalData_SwGameState::SwGameState_C*& _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::get_SwGameState() {
    return *(_Game_GlobalData_SwGameState::SwGameState_C**)((uintptr_t)this + 0x8c8);
}
_Script_CoreUObject::Class* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Subtitles/UI_SubtitleManager.UI_SubtitleManager_C");
    return result;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::SetScreenVisibility(bool Visible) {
    return;
}
void* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::Get_InteractionChoicePanel_Visibility_0() {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::QuitToTitle() {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::UpdateSubtitleScale(int32_t SubtitleScale) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::UpdateLetterboxOpacity(float LetterBoxOpacity) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::ChoiceAnimCompleted(int32_t Choice) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::UpdateVisibleLines() {
    return;
}
void* _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::Get_SubtitlesPanel_Visibility_0() {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::MakeDialogueChoice(int32_t ChoiceIndex) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::ToggleChoiceState(bool InChoiceMode, int32_t ChoiceCount) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::ShowDialogueChoice(_Script_RsGameTechRT::RsConversation* Conversation, void*& Choices, int32_t ChoiceNumber) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::EndLine(int32_t UID) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::PlayLine(void* Speaker, void* Content, int32_t UID, bool RadioLine, _Script_Engine::Actor* Actor, bool NotSpatialized, int32_t Attenuation) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::Construct() {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::OnWindowOpened0() {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::DPadPressed(void* ActionName) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::EndChoiceStateDueToConversationStopped(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::Choice1Made() {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::Choice2Made() {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::Choice3Made() {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::DelayAndMakeChoice(int32_t Choice) {
    return;
}
void _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C::ExecuteUbergraph_UI_SubtitleManager(int32_t EntryPoint) {
    return;
}
