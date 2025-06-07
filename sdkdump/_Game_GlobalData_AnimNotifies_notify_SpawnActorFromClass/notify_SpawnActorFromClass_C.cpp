#include "..\FUObjectArray.hpp"
#include "notify_SpawnActorFromClass_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_GlobalData_AnimNotifies_notify_SpawnActorFromClass::notify_SpawnActorFromClass_C::get_Class() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Game_GlobalData_AnimNotifies_notify_SpawnActorFromClass::notify_SpawnActorFromClass_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SpawnActorFromClass::notify_SpawnActorFromClass_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SpawnActorFromClass.notify_SpawnActorFromClass_C");
    return result;
}
