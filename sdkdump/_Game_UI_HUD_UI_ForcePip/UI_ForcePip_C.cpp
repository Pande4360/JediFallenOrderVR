#include "..\FUObjectArray.hpp"
#include "UI_ForcePip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_UI_HUD_UI_ForcePip::UI_ForcePip_C::get_Pips2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_UI_HUD_UI_ForcePip::UI_ForcePip_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/HUD/UI_ForcePip.UI_ForcePip_C");
    return result;
}
