#include "..\FUObjectArray.hpp"
#include "UI_DeathLocation_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
_Script_UMG::Image*& _Game_UI_Holomap_UI_DeathLocation::UI_DeathLocation_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x608);
}
_Script_UMG::CanvasPanel*& _Game_UI_Holomap_UI_DeathLocation::UI_DeathLocation_C::get_MainCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x610);
}
_Script_CoreUObject::Class* _Game_UI_Holomap_UI_DeathLocation::UI_DeathLocation_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Holomap/UI_DeathLocation.UI_DeathLocation_C");
    return result;
}
