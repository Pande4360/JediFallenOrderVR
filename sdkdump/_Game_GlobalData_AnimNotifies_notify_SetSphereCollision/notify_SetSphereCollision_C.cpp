#include "..\FUObjectArray.hpp"
#include "notify_SetSphereCollision_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
float& _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::get_StartForward() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::get_StartUp() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::get_EndForward() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::get_EndUp() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::get_AttackType() {
    return (void*)((uintptr_t)this + 0x61);
}
float& _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::get_Radius() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::get_HitObjectTypes() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::get_DebugDraw() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::get_HitEvent() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SetSphereCollision.notify_SetSphereCollision_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_SetSphereCollision::notify_SetSphereCollision_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
