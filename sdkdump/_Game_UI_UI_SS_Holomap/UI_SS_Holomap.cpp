#include "..\FUObjectArray.hpp"
#include "UI_SS_Holomap.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Font.hpp"
void* _Game_UI_UI_SS_Holomap::UI_SS_Holomap::get_SlateBlue_13_BDD013DC4DF6AABC4BEA3E97D144BB75() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_UI_UI_SS_Holomap::UI_SS_Holomap::get_LightBlue_14_7CFB44BB43F8C894BB1533938898C0B2() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::Font*& _Game_UI_UI_SS_Holomap::UI_SS_Holomap::get_UtilityTypefaceAvantGardeMedium_15_4DB526134348DAF1610BE8A336B6BA09() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Game_UI_UI_SS_Holomap::UI_SS_Holomap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/UI_SS_Holomap.UI_SS_Holomap");
    return result;
}
