#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsInfluence.hpp"
void* _Script_RsTechRT::RsInfluence::get_Transform() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsTechRT::RsInfluence::get_AngularDuration() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_RsTechRT::RsInfluence::get_LinearAdditive() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_RsTechRT::RsInfluence::get_LinearOverride() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsTechRT::RsInfluence::get_AngularType() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsTechRT::RsInfluence::get_LinearType() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_RsTechRT::RsInfluence::get_LinearDuration() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_RsTechRT::RsInfluence::get_base() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_RsTechRT::RsInfluence::get_StripLinearIdentity() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsInfluence::set_StripLinearIdentity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::RsInfluence::get_StripAngularIdentity() {
    return (*(uint8_t*)((uintptr_t)this + 0x5a + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsInfluence::set_StripAngularIdentity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5a + 0);
    *(uint8_t*)((uintptr_t)this + 0x5a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsInfluence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsInfluence");
    return result;
}
