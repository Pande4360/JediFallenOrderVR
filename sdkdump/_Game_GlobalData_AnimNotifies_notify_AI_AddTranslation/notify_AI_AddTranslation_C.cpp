#include "..\FUObjectArray.hpp"
#include "notify_AI_AddTranslation_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
float& _Game_GlobalData_AnimNotifies_notify_AI_AddTranslation::notify_AI_AddTranslation_C::get_ForwardTranslationAmount() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Game_GlobalData_AnimNotifies_notify_AI_AddTranslation::notify_AI_AddTranslation_C::get_TweenTime() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_AI_AddTranslation::notify_AI_AddTranslation_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_AI_AddTranslation.notify_AI_AddTranslation_C");
    return result;
}
float& _Game_GlobalData_AnimNotifies_notify_AI_AddTranslation::notify_AI_AddTranslation_C::get_UpTranslationAmount() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Game_GlobalData_AnimNotifies_notify_AI_AddTranslation::notify_AI_AddTranslation_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
