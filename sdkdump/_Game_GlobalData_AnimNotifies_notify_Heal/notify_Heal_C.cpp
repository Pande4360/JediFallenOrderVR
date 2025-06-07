#include "..\FUObjectArray.hpp"
#include "notify_Heal_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
float& _Game_GlobalData_AnimNotifies_notify_Heal::notify_Heal_C::get_HealPercentage_01() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Game_GlobalData_AnimNotifies_notify_Heal::notify_Heal_C::get_HealPercentage_02() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Game_GlobalData_AnimNotifies_notify_Heal::notify_Heal_C::get_HealPercentage_03() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_Heal::notify_Heal_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_Heal.notify_Heal_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_Heal::notify_Heal_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
