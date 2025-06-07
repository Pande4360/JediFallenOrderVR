#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SkeletalMeshComponent.hpp"
#include "SkeletalMeshSocket.hpp"
void _Script_Engine::SkeletalMeshSocket::set_bForceAlwaysAnimated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshSocket::get_bForceAlwaysAnimated() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void* _Script_Engine::SkeletalMeshSocket::get_SocketName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::SkeletalMeshSocket::get_BoneName() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshSocket::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkeletalMeshSocket");
    return result;
}
void* _Script_Engine::SkeletalMeshSocket::get_RelativeLocation() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SkeletalMeshSocket::get_RelativeScale() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::SkeletalMeshSocket::get_RelativeRotation() {
    return (void*)((uintptr_t)this + 0x44);
}
void _Script_Engine::SkeletalMeshSocket::InitializeSocketFromLocation(_Script_Engine::SkeletalMeshComponent* SkelComp, _Script_CoreUObject::Vector WorldLocation, _Script_CoreUObject::Vector WorldNormal) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SkeletalMeshSocket::GetSocketLocation(_Script_Engine::SkeletalMeshComponent* SkelComp) {
    return;
}
