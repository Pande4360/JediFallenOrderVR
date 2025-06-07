#include "..\FUObjectArray.hpp"
#include "Comp_Audio_Debug_Print_MusicSystemStatus_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::set_ToggleMusicPrint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x178 + 0);
    *(uint8_t*)((uintptr_t)this + 0x178 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
bool _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::get_ToggleMusicPrint() {
    return (*(uint8_t*)((uintptr_t)this + 0x178 + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::set_Print_Priority(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::get_PrintedBusName() {
    return (void*)((uintptr_t)this + 0x180);
}
bool _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::get_Print_Priority() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::set_IsTickEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x191 + 0);
    *(uint8_t*)((uintptr_t)this + 0x191 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::get_IsTickEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x191 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Component/Comp_Audio_Debug_Print_MusicSystemStatus.Comp_Audio_Debug_Print_MusicSystemStatus_C");
    return result;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::EnableTick() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C::ExecuteUbergraph_Comp_Audio_Debug_Print_MusicSystemStatus(int32_t EntryPoint) {
    return;
}
