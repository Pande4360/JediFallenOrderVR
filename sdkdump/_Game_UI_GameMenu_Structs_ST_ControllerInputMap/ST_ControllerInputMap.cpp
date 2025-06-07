#include "..\FUObjectArray.hpp"
#include "ST_ControllerInputMap.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_UI_GameMenu_Structs_ST_ControllerInputMap::ST_ControllerInputMap::get_InputEnum_20_58C4B6254018981BAE2038ACEE165A65() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Game_UI_GameMenu_Structs_ST_ControllerInputMap::ST_ControllerInputMap::get_ActionNameLocalized_16_37FF720F460B77A994FD4CAFD86005C7() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Structs_ST_ControllerInputMap::ST_ControllerInputMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/GameMenu/Structs/ST_ControllerInputMap.ST_ControllerInputMap");
    return result;
}
