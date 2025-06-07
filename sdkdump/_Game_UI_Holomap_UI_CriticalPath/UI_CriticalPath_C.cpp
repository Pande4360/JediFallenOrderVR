#include "..\FUObjectArray.hpp"
#include "UI_CriticalPath_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\Image.hpp"
_Script_UMG::Image*& _Game_UI_Holomap_UI_CriticalPath::UI_CriticalPath_C::get_CritPathImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x608);
}
_Script_CoreUObject::Class* _Game_UI_Holomap_UI_CriticalPath::UI_CriticalPath_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Holomap/UI_CriticalPath.UI_CriticalPath_C");
    return result;
}
