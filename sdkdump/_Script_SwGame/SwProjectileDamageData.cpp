#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "SwProjectileDamageData.hpp"
float& _Script_SwGame::SwProjectileDamageData::get_BaseDamage() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwProjectileDamageData::get_FriendlyDamage() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwProjectileDamageData::get_ReflectedDamage() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwProjectileDamageData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwProjectileDamageData");
    return result;
}
