#include "..\FUObjectArray.hpp"
#include "UI_SubtitleItem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C::UpdateLetterboxOpacity(float LetterBoxOpacity) {
    return;
}
_Script_UMG::HorizontalBox*& _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C::get_box_CharName() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x208);
}
_Script_UMG::TextBlock*& _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C::get_CharacterName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x210);
}
_Script_UMG::Border*& _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C::get_LetterBoxName() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Subtitles/UI_SubtitleItem.UI_SubtitleItem_C");
    return result;
}
_Script_UMG::Border*& _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C::get_LetterBoxText() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x220);
}
_Script_UMG::TextBlock*& _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C::get_LineText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x228);
}
_Script_UMG::ScaleBox*& _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C::get_ScaleBox_0() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x230);
}
void _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C::SetLineText(void* CharacterName, void* Text) {
    return;
}
