#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_Loop.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_Loop::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_Loop");
    return result;
}
int32_t& _Script_AIModule::BTDecorator_Loop::get_NumLoops() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
bool _Script_AIModule::BTDecorator_Loop::get_bInfiniteLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
float& _Script_AIModule::BTDecorator_Loop::get_InfiniteLoopTimeoutTime() {
    return *(float*)((uintptr_t)this + 0x70);
}
void _Script_AIModule::BTDecorator_Loop::set_bInfiniteLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
