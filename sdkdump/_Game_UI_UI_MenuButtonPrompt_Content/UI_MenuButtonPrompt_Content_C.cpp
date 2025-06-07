#include "..\FUObjectArray.hpp"
#include "UI_MenuButtonPrompt_Content_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_UMG::TextBlock*& _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C::get_KeyLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x218);
}
_Script_UMG::Overlay*& _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C::get_MKOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x220);
}
_Script_UMG::Image*& _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C::get_Prompt() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
void _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C::ShowPrompt() {
    return;
}
_Script_CoreUObject::Class* _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_MenuButtonPrompt_Content.UI_MenuButtonPrompt_Content_C");
    return result;
}
void _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C::ShowMKOverlay() {
    return;
}
void _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C::ExecuteUbergraph_UI_MenuButtonPrompt_Content(int32_t EntryPoint) {
    return;
}
