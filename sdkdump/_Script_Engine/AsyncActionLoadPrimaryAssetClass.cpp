#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\PrimaryAssetId.hpp"
#include "AsyncActionLoadPrimaryAssetBase.hpp"
#include "AsyncActionLoadPrimaryAssetClass.hpp"
void* _Script_Engine::AsyncActionLoadPrimaryAssetClass::get_Completed() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::AsyncActionLoadPrimaryAssetClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AsyncActionLoadPrimaryAssetClass");
    return result;
}
_Script_Engine::AsyncActionLoadPrimaryAssetClass* _Script_Engine::AsyncActionLoadPrimaryAssetClass::AsyncLoadPrimaryAssetClass(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::PrimaryAssetId PrimaryAsset, void*& LoadBundles) {
    return;
}
