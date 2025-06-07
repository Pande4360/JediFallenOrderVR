#include "..\FUObjectArray.hpp"
#include "r4GameInstance_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwGameInstance.hpp"
void* _Game_GlobalData_r4GameInstance::r4GameInstance_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void _Game_GlobalData_r4GameInstance::r4GameInstance_C::set_VSLintroFlyIn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_GlobalData_r4GameInstance::r4GameInstance_C::get_LVL_GlobalEvent() {
    return (void*)((uintptr_t)this + 0x1f0);
}
bool _Game_GlobalData_r4GameInstance::r4GameInstance_C::get_VSLintroFlyIn() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 1 != 0;
}
bool _Game_GlobalData_r4GameInstance::r4GameInstance_C::get_VSL150LightsOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x201 + 0)) & 1 != 0;
}
void _Game_GlobalData_r4GameInstance::r4GameInstance_C::set_VSL150LightsOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x201 + 0);
    *(uint8_t*)((uintptr_t)this + 0x201 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_GlobalData_r4GameInstance::r4GameInstance_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/r4GameInstance.r4GameInstance_C");
    return result;
}
void _Game_GlobalData_r4GameInstance::r4GameInstance_C::ReceiveInit() {
    return;
}
void _Game_GlobalData_r4GameInstance::r4GameInstance_C::DetectGlobalEvents(void* ID) {
    return;
}
void _Game_GlobalData_r4GameInstance::r4GameInstance_C::ExecuteUbergraph_r4GameInstance(int32_t EntryPoint) {
    return;
}
void _Game_GlobalData_r4GameInstance::r4GameInstance_C::LVL_GlobalEvent__DelegateSignature(void* ID) {
    return;
}
