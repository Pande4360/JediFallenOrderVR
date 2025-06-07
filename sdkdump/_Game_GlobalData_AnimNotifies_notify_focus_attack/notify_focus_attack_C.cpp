#include "..\FUObjectArray.hpp"
#include "notify_focus_attack_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_focus_attack::notify_focus_attack_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_focus_attack.notify_focus_attack_C");
    return result;
}
float& _Game_GlobalData_AnimNotifies_notify_focus_attack::notify_focus_attack_C::get_AttackDuration() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Game_GlobalData_AnimNotifies_notify_focus_attack::notify_focus_attack_C::get_BlurScale() {
    return *(float*)((uintptr_t)this + 0x84);
}
bool _Game_GlobalData_AnimNotifies_notify_focus_attack::notify_focus_attack_C::Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
