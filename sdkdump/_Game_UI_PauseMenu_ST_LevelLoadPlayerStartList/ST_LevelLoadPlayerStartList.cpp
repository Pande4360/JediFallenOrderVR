#include "..\FUObjectArray.hpp"
#include "ST_LevelLoadPlayerStartList.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_UI_PauseMenu_ST_LevelLoadPlayerStartList::ST_LevelLoadPlayerStartList::get_StartsForPlanet_3_7A8520354D381D64C62075A9CBE09A3A() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_UI_PauseMenu_ST_LevelLoadPlayerStartList::ST_LevelLoadPlayerStartList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/PauseMenu/ST_LevelLoadPlayerStartList.ST_LevelLoadPlayerStartList");
    return result;
}
