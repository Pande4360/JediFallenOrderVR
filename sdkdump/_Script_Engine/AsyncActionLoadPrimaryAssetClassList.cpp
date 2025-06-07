#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AsyncActionLoadPrimaryAssetBase.hpp"
#include "AsyncActionLoadPrimaryAssetClassList.hpp"
_Script_Engine::AsyncActionLoadPrimaryAssetClassList* _Script_Engine::AsyncActionLoadPrimaryAssetClassList::AsyncLoadPrimaryAssetClassList(_Script_CoreUObject::Object* WorldContextObject, void*& PrimaryAssetList, void*& LoadBundles) {
    return;
}
void* _Script_Engine::AsyncActionLoadPrimaryAssetClassList::get_Completed() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::AsyncActionLoadPrimaryAssetClassList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AsyncActionLoadPrimaryAssetClassList");
    return result;
}
