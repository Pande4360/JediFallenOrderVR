#include "..\FUObjectArray.hpp"
#include "UI_CinematicPlaceholder_TextLine_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_UI_Narrative_UI_CinematicPlaceholder_TextLine::UI_CinematicPlaceholder_TextLine_C::SetText(void* Text) {
    return;
}
void* _Game_UI_Narrative_UI_CinematicPlaceholder_TextLine::UI_CinematicPlaceholder_TextLine_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Narrative_UI_CinematicPlaceholder_TextLine::UI_CinematicPlaceholder_TextLine_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::TextBlock*& _Game_UI_Narrative_UI_CinematicPlaceholder_TextLine::UI_CinematicPlaceholder_TextLine_C::get_Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x218);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_TextLine::UI_CinematicPlaceholder_TextLine_C::Construct0() {
    return;
}
_Script_CoreUObject::Class* _Game_UI_Narrative_UI_CinematicPlaceholder_TextLine::UI_CinematicPlaceholder_TextLine_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Narrative/UI_CinematicPlaceholder_TextLine.UI_CinematicPlaceholder_TextLine_C");
    return result;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_TextLine::UI_CinematicPlaceholder_TextLine_C::ExecuteUbergraph_UI_CinematicPlaceholder_TextLine(int32_t EntryPoint) {
    return;
}
