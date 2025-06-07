#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "OnlineBlueprintCallProxyBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::OnlineBlueprintCallProxyBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.OnlineBlueprintCallProxyBase");
    return result;
}
void _Script_Engine::OnlineBlueprintCallProxyBase::Activate() {
    return;
}
