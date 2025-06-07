#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AsyncActionLoadPrimaryAssetBase.hpp"
#include "BlueprintAsyncActionBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::AsyncActionLoadPrimaryAssetBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AsyncActionLoadPrimaryAssetBase");
    return result;
}
