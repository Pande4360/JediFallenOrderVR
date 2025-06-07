#include "..\FUObjectArray.hpp"
#include "notify_AddShakeRumble_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\ForceFeedbackEffect.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_AddShakeRumble::notify_AddShakeRumble_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_AddShakeRumble.notify_AddShakeRumble_C");
    return result;
}
void* _Game_GlobalData_AnimNotifies_notify_AddShakeRumble::notify_AddShakeRumble_C::get_CameraShake() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Game_GlobalData_AnimNotifies_notify_AddShakeRumble::notify_AddShakeRumble_C::get_Radius() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Game_GlobalData_AnimNotifies_notify_AddShakeRumble::notify_AddShakeRumble_C::get_radial_rumble_intensity() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Game_GlobalData_AnimNotifies_notify_AddShakeRumble::notify_AddShakeRumble_C::get_Falloff() {
    return *(float*)((uintptr_t)this + 0x8c);
}
_Script_Engine::ForceFeedbackEffect*& _Game_GlobalData_AnimNotifies_notify_AddShakeRumble::notify_AddShakeRumble_C::get_ForceFeedbackEffect() {
    return *(_Script_Engine::ForceFeedbackEffect**)((uintptr_t)this + 0x90);
}
float& _Game_GlobalData_AnimNotifies_notify_AddShakeRumble::notify_AddShakeRumble_C::get_radial_rumble_duration() {
    return *(float*)((uintptr_t)this + 0x9c);
}
bool _Game_GlobalData_AnimNotifies_notify_AddShakeRumble::notify_AddShakeRumble_C::Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
