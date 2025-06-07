#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimationCompressionCommandletGroup.hpp"
void* _Script_Engine::RsAnimationCompressionCommandletGroup::get_GroupName() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::RsAnimationCompressionCommandletGroup::set_bActivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsAnimationCompressionCommandletGroup::get_bActivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void* _Script_Engine::RsAnimationCompressionCommandletGroup::get_PathTokensRequired() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::RsAnimationCompressionCommandletGroup::get_PathTokensProhibited() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::RsAnimationCompressionCommandletGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsAnimationCompressionCommandletGroup");
    return result;
}
void* _Script_Engine::RsAnimationCompressionCommandletGroup::get_ProfileNameWithAlgorithmParameters() {
    return (void*)((uintptr_t)this + 0x38);
}
