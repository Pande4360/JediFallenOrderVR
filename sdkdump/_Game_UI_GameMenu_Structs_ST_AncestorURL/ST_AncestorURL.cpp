#include "..\FUObjectArray.hpp"
#include "ST_AncestorURL.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_UI_GameMenu_Structs_ST_AncestorURL::ST_AncestorURL::get_AncestorTag_2_EEE1023644F311643C57B885887460FB() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Game_UI_GameMenu_Structs_ST_AncestorURL::ST_AncestorURL::get_AncestorGeneration_5_34705CF6475B2433C304A0AC2FCFD14C() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Structs_ST_AncestorURL::ST_AncestorURL::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/GameMenu/Structs/ST_AncestorURL.ST_AncestorURL");
    return result;
}
