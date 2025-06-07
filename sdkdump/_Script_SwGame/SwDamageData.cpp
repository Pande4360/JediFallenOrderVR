#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwDamageData.hpp"
float& _Script_SwGame::SwDamageData::get_Damage() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwDamageData::get_DamageType() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwDamageData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwDamageData");
    return result;
}
