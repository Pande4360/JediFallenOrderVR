#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CachedAnimAssetPlayerData.hpp"
void* _Script_Engine::CachedAnimAssetPlayerData::get_StateName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::CachedAnimAssetPlayerData::get_StateMachineName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::CachedAnimAssetPlayerData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CachedAnimAssetPlayerData");
    return result;
}
