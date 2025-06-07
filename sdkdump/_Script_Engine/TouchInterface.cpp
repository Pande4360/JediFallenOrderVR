#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "TouchInterface.hpp"
float& _Script_Engine::TouchInterface::get_TimeUntilDeactive() {
    return *(float*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::TouchInterface::get_Controls() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::TouchInterface::get_ActiveOpacity() {
    return *(float*)((uintptr_t)this + 0x38);
}
void _Script_Engine::TouchInterface::set_bPreventRecenter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::TouchInterface::get_InactiveOpacity() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::TouchInterface::get_ActivationDelay() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::TouchInterface::get_TimeUntilReset() {
    return *(float*)((uintptr_t)this + 0x44);
}
bool _Script_Engine::TouchInterface::get_bPreventRecenter() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
float& _Script_Engine::TouchInterface::get_StartupDelay() {
    return *(float*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::TouchInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TouchInterface");
    return result;
}
