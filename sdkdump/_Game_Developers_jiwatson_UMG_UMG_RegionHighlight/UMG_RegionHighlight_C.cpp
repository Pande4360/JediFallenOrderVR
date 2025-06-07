#include "..\FUObjectArray.hpp"
#include "UMG_RegionHighlight_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Developers_jiwatson_UMG_UMG_RegionHighlight::UMG_RegionHighlight_C::get_Image_36() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_Developers_jiwatson_UMG_UMG_RegionHighlight::UMG_RegionHighlight_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Developers/jiwatson/UMG/UMG_RegionHighlight.UMG_RegionHighlight_C");
    return result;
}
