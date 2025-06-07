#include "..\FUObjectArray.hpp"
#include "notify_Wetness_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
float& _Game_GlobalData_AnimNotifies_notify_Wetness::notify_Wetness_C::get_Height__0_1_() {
    return *(float*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_Wetness::notify_Wetness_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_Wetness.notify_Wetness_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_Wetness::notify_Wetness_C::Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
