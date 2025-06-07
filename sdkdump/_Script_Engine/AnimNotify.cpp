#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimNotify.hpp"
#include "AnimSequenceBase.hpp"
#include "SkeletalMeshComponent.hpp"
void* _Script_Engine::AnimNotify::get_RequiredSignificance() {
    return (void*)((uintptr_t)this + 0x2a);
}
bool _Script_Engine::AnimNotify::get_bAlwaysProcessOnBegin() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_Engine::AnimNotify::set_bAlwaysProcessOnBegin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotify::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotify");
    return result;
}
bool _Script_Engine::AnimNotify::Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
void* _Script_Engine::AnimNotify::GetNotifyName() {
    return;
}
