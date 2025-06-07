#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAsyncLoadAssetData.hpp"
_Script_CoreUObject::Object*& _Script_Engine::RsAsyncLoadAssetData::get_LoadedAsset() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RsAsyncLoadAssetData::get_ActorsToNotify() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RsAsyncLoadAssetData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsAsyncLoadAssetData");
    return result;
}
