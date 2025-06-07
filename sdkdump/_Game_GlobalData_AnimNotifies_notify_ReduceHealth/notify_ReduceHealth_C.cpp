#include "..\FUObjectArray.hpp"
#include "notify_ReduceHealth_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_ReduceHealth::notify_ReduceHealth_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_ReduceHealth.notify_ReduceHealth_C");
    return result;
}
float& _Game_GlobalData_AnimNotifies_notify_ReduceHealth::notify_ReduceHealth_C::get_reduceHealthAmount() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Game_GlobalData_AnimNotifies_notify_ReduceHealth::notify_ReduceHealth_C::get_dmgType() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Game_GlobalData_AnimNotifies_notify_ReduceHealth::notify_ReduceHealth_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
