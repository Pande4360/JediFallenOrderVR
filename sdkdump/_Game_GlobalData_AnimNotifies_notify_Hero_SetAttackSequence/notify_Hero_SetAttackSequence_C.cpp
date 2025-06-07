#include "..\FUObjectArray.hpp"
#include "notify_Hero_SetAttackSequence_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_GlobalData_AnimNotifies_notify_Hero_SetAttackSequence::notify_Hero_SetAttackSequence_C::get_SequenceName() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::DataTable*& _Game_GlobalData_AnimNotifies_notify_Hero_SetAttackSequence::notify_Hero_SetAttackSequence_C::get_SequenceTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_Hero_SetAttackSequence::notify_Hero_SetAttackSequence_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_Hero_SetAttackSequence.notify_Hero_SetAttackSequence_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_Hero_SetAttackSequence::notify_Hero_SetAttackSequence_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
