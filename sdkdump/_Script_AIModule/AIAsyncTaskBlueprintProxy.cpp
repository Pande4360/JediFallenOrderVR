#include "..\FUObjectArray.hpp"
#include "AIAsyncTaskBlueprintProxy.hpp"
#include "AIRequestID.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_AIModule::AIAsyncTaskBlueprintProxy::get_OnSuccess() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AIModule::AIAsyncTaskBlueprintProxy::get_OnFail() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_AIModule::AIAsyncTaskBlueprintProxy::OnMoveCompleted(_Script_AIModule::AIRequestID RequestID, void* MovementResult) {
    return;
}
_Script_CoreUObject::Class* _Script_AIModule::AIAsyncTaskBlueprintProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AIAsyncTaskBlueprintProxy");
    return result;
}
