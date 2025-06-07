#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDamageParams.hpp"
void* _Script_RsGameTechRT::RsDamageParams::get_HitNormal() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsDamageParams::get_HitVelocity() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_RsGameTechRT::RsDamageParams::get_DamagedActorCollider() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsDamageParams::get_SwingDirection() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsDamageParams::get_AttackerDirection() {
    return (void*)((uintptr_t)this + 0x9);
}
void* _Script_RsGameTechRT::RsDamageParams::get_AttackerDirectionVector() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_RsGameTechRT::RsDamageParams::get_HitBone() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsDamageParams::get_HitLocation() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsDamageParams::get_HitPhysMaterial() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsDamageParams::get_HitEvent() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDamageParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDamageParams");
    return result;
}
