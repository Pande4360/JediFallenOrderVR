#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "UI_MenuButtonPromptDirectKey_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x378);
}
void _Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C::ExecuteUbergraph_UI_MenuButtonPromptDirectKey(int32_t EntryPoint) {
    return;
}
void* _Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C::get_DirectKeyController() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C::get_DirectKeyKMB() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_MenuButtonPromptDirectKey.UI_MenuButtonPromptDirectKey_C");
    return result;
}
void _Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C::SetKeyForAction0() {
    return;
}
